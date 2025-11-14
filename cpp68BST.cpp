#include <iostream>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;

    node(int data){
        val = data;
        left = right = NULL;
    }
};

node* insert(node* root , int data){
    if(root == NULL){
        return new node(data);
    }
    if(data < root->val){
        root->left = insert(root->left , data);
    }else{
        root->right = insert(root->right, data);
    }
    return root;
}

node* build(int arr[] , int n){
    node* root = NULL;
    for(int i = 0 ; i < n ; i++){
        root = insert(root, arr[i]);
    }
    return root;
}

//treversal
void inOrder(node* root){
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main(){
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = build(arr , n);
    inOrder(root);

    return 0;
}
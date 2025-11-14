#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
            left = right = NULL;
        }
};  

static int idx = -1;

// builing the tree

node* build(vector<int> pre){
    idx++;
    if(pre[idx] == -1) return NULL;
    node* root = new node(pre[idx]);
    root->left = build(pre);
    root->right = build(pre);
    return root;
}

//treversing the tree

void preOrder(node* root){
    if(root == NULL) return ;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){
    if(root == NULL) return ;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL) return ;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

//visual treversal of the tree

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        node* curr = q.front();
        q.pop();
        if(curr == NULL){
            if(!q.empty()) {
                cout << endl; 
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        cout << curr->data << " ";
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }
    cout << endl;  
}

//morrisInorderTreversal
void morris(node* root){
    node* curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            cout << curr->data << " ";
            curr = curr->right;
        }else{
            //find the IP
            node* IP = curr->left;
            while(IP->right != NULL && IP->right != curr){
                IP = IP->right;
            }
           
        if(IP->right == NULL){
            IP->right = curr;
            curr = curr->left;
        }else{
            IP->right = NULL;
            cout << curr->data << " ";
            curr = curr->right;
        }
        }
    }

}

int main(){
    vector<int> preorder = {1, 2, -1,-1, 3,4,-1,-1,5,-1,-1};

    node* root =build(preorder);
    inOrder(root);
    cout << endl;
    morris(root);

    return 0;
}

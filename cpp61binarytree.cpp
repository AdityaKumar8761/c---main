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
node* build(vector<int> pre){
    idx++;
    if(pre[idx] == -1) return NULL;
    node* root = new node(pre[idx]);
    root->left = build(pre);
    root->right = build(pre);
    return root;
}

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

int height(node* root){
    if(root == NULL) return 0 ;
    int leftH = height(root->left);
    int rightH = height(root->right);
    return max(leftH , rightH) + 1;
}

int count(node* root){
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}

int sumOfNode(node* root){
    if(root == NULL) return 0;
    int l = sumOfNode(root->left);
    int r = sumOfNode(root->right);
    return l + r + root->data;
}

int main(){
    vector<int> preorder = {1, 2, -1,-1, 3,4,-1,-1,5,-1,-1};

    node* root = build(preorder);
    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl; 

    postOrder(root);
    cout << endl; 

    levelOrder(root);

    cout << height(root) << endl;
    cout << count(root) << endl;
    cout << sumOfNode(root)<< endl;

    return 0;
}

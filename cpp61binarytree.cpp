#include <iostream>
using namespace std;

int pow(int n,int a){
    if(a <= 0){
        return 1;
    }else if( a == 1){
        return n;
    }else {
        return pow(n , a-1);
    }
}

int num = -1;
int level = pow(2 , num);

struct node{
    int data;
    node* fc;
    node* sc;
};

node* binarytree(){
    node* head =nullptr;
    return head;
}

void addnode(node* &head){
    if(head == nullptr){
        node* n = new node;
        n->fc = nullptr;
        n->sc = nullptr;
        head = n;
        node* temp = head;
        cout << "Enter the data for " << level<< " :" ;
        cin >> n->data;
        num++;
    }else{
        
    }
}

int main(){

    return 0;
}
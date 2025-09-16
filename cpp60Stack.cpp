#include <iostream>
using namespace std;

//using linked list 
struct node{
    int data;
    node* next;
};

 node* createStack(){
    node* head = nullptr;

    return head;
}

void Insert(node* &head){
    node* temp = head;
    if(head== nullptr){
        node* n = new node;
        cout << "Enter the data for the stack: " ;
        cin >> n->data;
        head = n;
    }
    else{
        node* n = new node;
        cout<<"enter the data for stack: ";
        cin >> n->data;
        n->next = head;
        head = n;
    }
}

void printStack(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void pop(node* &head){
    node* temp = head;
    head = temp->next;
    delete temp;
}

void Peek(node* &head){
    cout << head->data << endl;
}

int main(){
    node* top = createStack();

    for(int i = 0 ; i< 5 ; i++){
        Insert(top);
    }

    pop(top);
    Peek(top);

    printStack(top);

    return 0;
}
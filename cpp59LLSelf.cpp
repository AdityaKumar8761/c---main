#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* CreateLL(){
    //creating the head
    node* head = nullptr;


    //creating a linked list
    node* n = new node;  //allocating memory
    cout << "Enter the data :";
    cin >> n->data;
    n->next=nullptr;
    head = n;

    return head;

};


//insertLL will also create the ll if not created already
void InsertLL(node* &head){
    node* temp = head;
    if(head == nullptr){
    node* n = new node;  //allocating memory
    cout << "Enter the data :";
    cin >> n->data;
    n->next=nullptr;
    head = n;
    }
    else{
        while(temp->next != nullptr){
            temp = temp->next;
        }
        node* n = new node;
        temp->next = n;
        cout << "Enter the data :";
        cin >> n->data;
        n->next=nullptr;
    }
};

void popLL(node* &head , int idx){
    node* temp = head;
    if(idx == 0){
        head = head->next;
        delete temp;
    }
    else{
        node* prev = head; 
        int i = 1;
        temp = temp->next;
        while(idx == i-1){
            temp = temp->next;
            prev = prev->next;
        }
        prev->next = temp->next;
        delete temp;
    }
};

void printLL(node* &head){
    node*temp = head;
    while(temp!=nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
};

int main(){

    node* head = CreateLL();

    for(int i = 0 ; i < 4; i++){
        InsertLL(head);
    }

    popLL(head,1);
    printLL(head);


    return 0;
}
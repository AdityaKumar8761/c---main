#include <iostream>
using namespace std;

struct node{
    int coff;
    int pow;
    node* next;
};

void insert(node* &head){
    node* n = new node;
    cout << "Enter the coff and power: " ; cin >>  n->coff >> n->pow;
    n->next = nullptr;
    node* temp = head;
    
    if(head == nullptr){
        head = n;
        return;
    }
    else if(temp->next == nullptr){
        if(temp->pow > n->pow){
            temp->next = n;
        }else{
            n->next = temp;
            head = n;
        }
    }else{
        node* prev = nullptr;
        while(temp != nullptr && temp->pow > n->pow){
            prev = temp;
            temp = temp->next;  // Fixed: actually advance the pointer
        }
        
        if(prev == nullptr){
            n->next = head;
            head = n;
        }else{
            n->next = temp;
            prev->next = n;
        }
    }
}

void print(node* &head){
    node* temp = head;
    while(temp->next != nullptr){
        cout << temp->coff << "x^" << temp->pow<< " + ";
        temp = temp->next;
    }
    cout << temp->coff << "x^" << temp->pow<< endl;
}

int main(){
    int n;
    cout << "Enter the number of terms: " ; cin >> n;
    node* head = nullptr;
    for (int i = 0 ; i < n ; i++ ){
        insert(head);
    }
    print(head);
    return 0;
}
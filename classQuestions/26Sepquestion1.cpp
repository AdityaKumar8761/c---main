#include <iostream>
using namespace std;

struct node{
    int coff;
    int pow;
    node* next;
};



void input(node* &head){
    node* temp = head;
    if(head == nullptr){
        node* n = new node;
        cout << "enter the value and the power: ";
        cin >> n->coff >> n->pow;
        n->next = nullptr;
        head = n;
    }else{
        while(temp->next != nullptr){
            temp= temp->next;
        }
        node* n = new node;
        cout << "enter the value and the power: ";
        cin >> n->coff >> n->pow;
        n->next = nullptr;
        temp->next = n;
    }

}

void printresult(node* head , int x){
    int result = 0;
    node* temp = head;
    while(temp->next != nullptr){
        cout << temp->coff <<"x^" <<temp->pow << "+" ;
        result += temp->coff * ((temp->pow)*x);
        temp= temp->next;
    }
    cout << temp->coff <<"x^" <<temp->pow ;
    result += temp->coff * ((temp->pow)*x);
    cout << endl;
    cout << result;
}

int main(){
    int n ;
    cout << "entet the number of terms:" ; cin>> n;

    node* head = nullptr;

    for(int i = 0 ; i<n ; i++){
        input(head);
    }

    int x;
    cout << "enter the value of x:";
    cin >>  x;

    printresult(head , x);
    return 0;
}
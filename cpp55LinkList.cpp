#include <iostream>
using namespace std;


//linked list 
class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    node* head;
    node* tail;

    public:
        List(){
            head = tail = NULL;
        }


        void push_front(int val){
            node* newNode = new node(val); 
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            node* newNode = new node(val);

            if(head == NULL){
                head = tail = newNode;
            }else {
                tail->next =newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head ==NULL){
                cout << "LL is empty\n";
                return;
            }

            node* temp = head;
            head = head-> next;
            temp-> next = NULL;

            delete temp;
        }

        void pop_back(){
            if(head == NULL){
                cout << "LL is empty\n";
                return;
            }

            node* temp = head;
            while(temp->next != tail){
                temp = temp-> next;
            }

            temp-> next = NULL;
            delete tail;
            tail = temp;
        }

        void insert(int val ,int pos){
            if(pos < 0){
                cout << "invalid pos\n";
                return;
            }
            if(pos == 0) {
                 push_back(val);
                 return;
            }

            node* temp = head;
            for(int i = 0; i<pos-1; i++){
                temp = temp->next;
            }

            node* newNode = new node(val);
            newNode->next = temp-> next;
            temp->next = newNode;
        }

        int search(int key){
            node* temp = head;
            int idx = 0;

            while (temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp-> next;
                idx++;
            }

            return -1;
        }

        void printLL(){
            node* temp = head;

            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout <<endl;
        }
};



int main(){
    List l1;

    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    cout << l1.search(1) << endl;

    l1.insert(4,1);

    l1.printLL();

    return 0;
}
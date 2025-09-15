#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* LList(int n) {
    if (n <= 0) return nullptr;

    Node* head = nullptr;
    Node* temp = nullptr;

    for (int i = 1; i <= n; i++) {
        Node* newNode = new Node;
        cout << "Enter value for node " << i ;
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp->next = head;
    return head;
}


void Shift(Node*& head, int shifts,int n) {
    for (int i = 0; i < shifts*(n-1); i++) {
        head = head->next; 
    }
}


int main() {
    int n = 3, shifts;
    Node* head = LList(n);

    cout << "Enter number of shifts";
    cin >> shifts;

    Shift(head, shifts , n);

    Node* temp = head;
    for (int i = 0; i < n; i++) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

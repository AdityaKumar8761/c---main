#include <iostream>
#include <cmath>
using namespace std;

struct node {
    int coff;
    int pow;
    node* next;
};

void input(node*& head) {  // pass by reference
    node* temp = head;
    if (head == nullptr) {
        node* n = new node;
        cout << "enter the value and the power: ";
        cin >> n->coff >> n->pow;
        n->next = nullptr;
        head = n;
    } else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        node* n = new node;
        cout << "enter the value and the power: ";
        cin >> n->coff >> n->pow;
        n->next = nullptr;
        temp->next = n;
    }
}

void deletegiven(node*& head, int p) {
    while (head != nullptr && head->pow == p) {
        node* cur = head;
        head = head->next;
        delete cur;
    }

    node* temp = head;
    while (temp != nullptr && temp->next != nullptr) {
        if (temp->next->pow == p) {
            node* cur = temp->next;
            temp->next = cur->next;
            delete cur;
        } else {
            temp = temp->next;
        }
    }
}

void printresult(node* head, int x) {
    int result = 0;
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->coff << "x^" << temp->pow;
        if (temp->next != nullptr) cout << " + ";
        result += temp->coff * pow(x, temp->pow);
        temp = temp->next;
    }
    cout << endl;
    cout << result;
}

int main() {
    int n;
    cout << "entet the number of terms:"; 
    cin >> n;

    node* head = nullptr;

    for (int i = 0; i < n; i++) {
        input(head);
    }

    int x;
    cout << "enter the value of x:";
    cin >> x;

    int p;
    cout << "enter the power to delete:"; 
    cin >> p;

    deletegiven(head, p); 

    printresult(head, x);
    return 0;
}

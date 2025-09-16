#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    Student* next;
};

void addOrder(Student*& head, const string& name, int id) {
    Student* newOrder = new Student;
    newOrder->name = name;
    newOrder->id = id;
    newOrder->next = nullptr;

    if (head == nullptr) {
        head = newOrder;
    } else {
        Student* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newOrder;
    }
}

bool removeOrder(Student*& head, int id) {
    if (head == nullptr) return false;

    Student* temp = head;
    Student* prev = nullptr;

    while (temp != nullptr) {
        if (temp->id == id) {
            if (prev == nullptr) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            return true;
        }
        prev = temp;
        temp = temp->next;
    }
    return false;
}


int main() {
    int n;
    cout << "enter number of customers ";
    cin >> n;

    Student* head = nullptr;

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        cout << "enter customer name and order ID ";
        cin >> name >> id; 
        addOrder(head, name, id);
    }

    int removeId;
    cout << "enter order id to remove ";
    cin >> removeId;

    if (removeOrder(head, removeId)) {
        cout << "order has been deleted" << endl;
    } else {
        cout << "order does not exist" << endl;
    }


    return 0;
}

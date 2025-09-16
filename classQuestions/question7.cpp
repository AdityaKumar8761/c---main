#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    Student* next;
};

void addStudent(Student*& head, const string& name, int id) {
    Student* newStudent = new Student;
    newStudent->name = name;
    newStudent->id = id;
    newStudent->next = nullptr;

    if (head == nullptr) {
        head = newStudent;
    } else {
        Student* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

string searchStudent(Student* head, int id) {
    Student* temp = head;
    while (temp != nullptr) {
        if (temp->id == id) {
            return temp->name;
        }
        temp = temp->next;
    }
    return "Student not found.";
}

int main() {
    int n;
    cout << "Enter the num of student";
    cin >> n;

    Student* head = nullptr;

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        cout << "Enter name and id";
        cin >> name >> id;
        addStudent(head, name, id);
    }

    int searchId;
    cout << "Enter the id to search";
    cin >> searchId;

    cout << searchStudent(head, searchId) << endl;

    return 0;
}

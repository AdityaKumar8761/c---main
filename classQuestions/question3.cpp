#include <iostream>
using namespace std;

// Question 3:
// A software developer manages employee data for a company. The company needs a way to sort the employees based on their salaries to prepare for annual performance reviews. Implement this scenario to sort the employees using the selection sort algorithm.
// Details:
// · Each employee is represented by a structure that includes their name and salary.
// · The company needs to sort the employees in descending order of salaries. If two employees have the same salary, they should retain their original order.
// Input:
// An array of Employee structures is given. Each structure contains the following information:
// · name: a string representing the employee's name.
// · salary: an integer representing the employee's salary.
struct money{
    string currencyType;
    int amount;
};

struct Employee {  
    string name;
    money mon;
}; 

void selectionSort(Employee arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].mon.amount > arr[maxIdx].mon.amount) {
                maxIdx = j;
            }
        }
        if (maxIdx != i) {
            Employee temp = arr[maxIdx];
            for (int k = maxIdx; k > i; k--) {
                arr[k] = arr[k - 1];
            }
            arr[i] = temp;
        }
    }
}


int main(){
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the employee name: ";
        cin >> arr[i].name;
        cout << "Enter the employee salery: ";
        cin >> arr[i].mon.currencyType >> arr[i].mon.amount;
    } 

    selectionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << "(" << arr[i].name << " " << arr[i].mon.currencyType << " " << arr[i].mon.amount << ") ";
    }
    cout << endl;

    return 0;
}

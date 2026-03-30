#include <iostream>
using namespace std;

void insertAtBeginning(int arr[], int &n, int value) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n++;
}

void insertAtEnd(int arr[], int &n, int value) {
    arr[n] = value;
    n++;
}

void insertAtIndex(int arr[], int &n, int value, int index) {
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
}

void printArr(int arr[] , int &n ){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int val = 0;
    insertAtEnd(arr , n , val);
    printArr(arr , n );

    return 0;
}

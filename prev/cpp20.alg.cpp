#include <iostream>
using namespace std;
void reverseArray(int arr[], int size){for(int i = 0 ; i < size/2 ; i++){swap(arr[i],arr[size-1-i]);}}
int main(){int arr[] = {5,3,6,8,5,1,9,0,6,4};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr,size);
    for (int i = 0 ; i<sizeof(arr)/sizeof(int) ; i++){
        cout << arr[i] << " ";}
    cout << endl;
    return 0;} 
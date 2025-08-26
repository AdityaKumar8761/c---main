#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout << arr << endl;   //constant pointer
    cout << *arr << endl;
    cout << *(arr+1) << endl;

    // ----> pointer Arithmetic <----
    //operation is done by integer value of by 4 bytes
    
    // int a = 10;
    // int* ptr = &a;

    // cout << ptr << endl;
    // ptr--;
    // cout << ptr << endl;
    // ptr++;
    // ptr++;
    // cout << ptr << endl;

    return 0;
}
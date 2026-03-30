#include <iostream>
using namespace std;

void changeReference(int* ptr){
    *ptr = 50;
}

int main(){
// // ---> pointer
//     int a = 10;
//     cout <<&a << endl;

//     int * ptr = &a;
//     cout << ptr << endl;

// // ---> pointer to pointer
//     int** ptr2 = &ptr;
//     cout << ptr2 << endl;
//     cout << &ptr << endl;

// //* -- Dereference opereator
// // value at address

// cout << *(ptr) << endl;
// // cout << *(0x5ffec4) << endl; -- worng


// // ----> NULL POINTER
//     int* ptr3 = NULL ;
//     cout << ptr3 << endl;


// ----> Pass by Reference
    int b = 10;
    changeReference(&b);
    cout<<b<< endl;


    return 0;
}
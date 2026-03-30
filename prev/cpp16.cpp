#include <iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;   //no need to use in window 64 bit
    cout << sizeof(short int) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(signed int) << endl;
    cout << sizeof(unsigned int) << endl;

    return 0;
}


//        ----->Operators precedence<-----
//
//  ! ,++.-- (unary operators)    first    R to L
//  +,/,%                         second   L to R
//  +,-                           third    L to R
//  <,<=,=>,>                     fourth   L to R
//  ==,!=                         fifth    L to R
//  &&                            sixth    L to R
//  ||                            seventh  L to R
//  =(assignment)                 last     R to L


//              ----->Scope<-----
//
// Defined for variables
// area where a variable is access
// 1.local  --> defined in a small scope
// 2.global --> veriable outside any function


//        ----->Data Type Modifiers<-----
//
// long     >= 4 Byte
// short    >= 2 Byte
// long long>= 8 Byte
// signed   >= save both posite and negative
// unsigne  >= save only positive value
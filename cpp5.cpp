#include <iostream>
using namespace std;

int main(){
    char a ;
    cout << "enter the character :" ;
    cin >> a;
    cout << (a > 96 ? "The characer is lowercase" : "The character is Upper case") << endl;

    return 0;
}

//ternary statement
//conditon ? true : false;
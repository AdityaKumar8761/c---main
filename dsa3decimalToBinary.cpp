#include <iostream>
using namespace std;

//decimal to binary

int main(){
    int n;
    cout << "Enter the decimal number: " ; cin >> n;
    int output =0;
    int term = 1;
    while ( n > 0){
        output += (n%2) * term;
        term *= 10;
        n /= 2;
    }

    cout << output << endl;

    //binary to decimal

    int b ;
    cout << "Enter the binary number :" ; cin >> b;
    int num = 0;
    int val = 1;
    while(b > 0){
        num += (b%10) * val;
        b = b/10;
        val *= 2;
    }
    cout << num << endl;

    return 0;
}
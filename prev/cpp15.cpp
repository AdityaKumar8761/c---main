#include <iostream>
using namespace std;

int decimalToBinary(int n){
    int i = 1;
    int num = 0;
    
    while(n > 0){
        int rem = n%2 ;
        n = n/2;
        num += rem*i;
        i *= 10;
    }
    return num;
}

bool validBinary(int n){
    while(n>0){
        int c = n%10;
        n /= 10;
        if (c!=0 && c!=1) return false;
    }
    return true;
}

int BinaryToDecimal(int n){
    int i = 1;
    int num = 0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        num += rem * i;
        i *= 2;
    }
    return num;
}

int main(){
    int num;
    cout << "Enter the number you want to convert to binary :" ;
    cin >> num ;

    cout << decimalToBinary(num) << endl ;

    int mum;
    cout << "Enter the number you want to find the binary of :" ;
    cin >> mum ;
    if (validBinary(mum) == 1){
        cout << BinaryToDecimal(mum) << endl;
    }
    else{
        cout << "The input is not a valid binary output";
    }

    return 0;
}
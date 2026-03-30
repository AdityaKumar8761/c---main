#include <iostream>
using namespace std;

// armstrong number is sum of cube of its digit is equal to the digit itself
void arm(int n){
    int o = n;
    int digit = 0;
    while(n != 0){
        digit += (n%10)*(n%10)*(n%10);
        n /= 10;
    }

    if(digit == o){
        cout << "The number is armstrong";
    }else{cout<<"the number is not armstrong";}
}

int main(){
    int n = 153;
    arm(n);
}
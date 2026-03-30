#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for (int i=1 ; i<= n ; i++){
        sum += i;
    }
    return sum;
}

unsigned long long factorial(int n){
    unsigned long long fact = 1;
    for (int i = 2 ; i <= n ; i++){
        fact *= i;
    }
    if(n == 0 || n==1){
        return 1;
    }
    else {
        return fact;
    }
}

int main(){
    int num;
    cout << "Enter the number :";
    cin >> num;

    cout << "The sum of the number is " << sumN(num) << endl;
    cout << "The factorial of the number is " << factorial(num) << endl;

    return 0;
}



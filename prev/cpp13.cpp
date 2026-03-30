#include <iostream>
using namespace std;

//pass by value
//all primitive data type is pass by value

int sumOfTheDigit(int x){
    int sum = 0;
    while(x>0){
        sum += x%10;
        x /= 10;
    }

    return sum;
}

int fact(int n){
    if (n<2){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

double binomialCofficient(int n , int r){
    double BC = fact(n)/(fact(r)*fact(n-r));
    return BC;
}


int main(){
    int n ;
    cout << "Enter the number you want to find the sum of :";
    cin >> n;

    cout << "The sum of the digit of the number is " << sumOfTheDigit(n) << endl ;

    int x,y;
    cout << "Enter the number you want to find the binomial cofficent of " << endl;
    cin >> x >> y;

    cout << "The binomial cofficient of the number is " << binomialCofficient(x , y) << endl;

    return 0;
}
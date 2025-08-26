#include <iostream>
using namespace std;

int printHello(){
    cout << "hello world\n";
    return 94;
}

int sum(int a , int b){
    return a+b;
}

int main(){
    int val = printHello();
    cout << val << endl;

    int x = 99;
    int y = 88;

    int s = sum(x ,y);
    cout << s << endl ;

    cout << printHello() << endl;

    return 0;
}


//retrunType nameOfTheFunciton(type1 parametner1 , type2 parameter2){
//properties assigned to the function
//}

//arguments are the actual values of the function and the parameter are the copy of the values 


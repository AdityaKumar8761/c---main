#include <iostream>
using namespace std;

int main(){
    cout << "enter the number: " ;
    int a ;
    cin >> a ;
    if ( a< 0 ){
        cout << "the number is negative" << endl;
    }
    else{ 
        cout << "the number is positive" << endl;
    }

    if(a==0){
        cout<<" the number is neiter positive nor negative" << endl;
    }

    else if (a%2 == 0){
        cout<< " the number is even"<< endl;
    }
    else{
        cout<< "the number is odd" << endl;
    }
    return 0;
}
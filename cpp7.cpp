#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "enter the number :" ;
    cin >> n;
    bool isPrime = true ;
    for(int i = 2 ; i*i<n ; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) cout << "the number is Prime" <<endl;
    else cout << "the numer is not-prime" << endl;

    //NESTED LOOPS
    for ( int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cout << "* " ;
        }
        cout << endl;
    }

    return 0 ;
}
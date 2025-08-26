#include <iostream>
using namespace std;


//inverted triangle pattern

int main(){
    int n ;
    cout << "Enter the number :";
    cin >> n;

    for( int i = 0 ; i<n ; i++){
        for(int j = n-i ; j>1 ; j--){
            cout << "  " ;
        }
        cout << "* ";
        if(i != 0){
            for ( int j = 1 ; j<=2*i-1; j++){
                cout << "  " ;
            }
            cout << "* ";
        }
        cout << endl;
    }

    for ( int i = 0 ; i < n-1 ; i++ ){
        for ( int j = 0 ; j <i+1 ; j++){
            cout << "  ";
        }
        cout << "* ";
        if (i!=n-2){
            for (int k =0; k<2*(n-2-i)-1 ; k++){
                cout << "  ";
            }
            cout << "* ";

        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: " ; cin >> n;
    for(int i = 0 ; i<n ; i++){
        char ch ='A';
        for(int j =0 ; j<n ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    int a = 1;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << a++ << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i =0 ; i<n; i++){
        for(int j = i+1 ; j>0 ; j-- ){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<i ; j++){
            cout << "  ";
        }
        for(int k = n-i ; k>0 ; k--){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;

}
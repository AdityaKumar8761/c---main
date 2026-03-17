#include <iostream>
#include <climits>
using namespace std;


int main(){
    int marks[] = {99 ,44 ,22,88,22};

    int n = sizeof(marks)/sizeof(marks[0]);

    int l = INT_MIN;
    for (int i = 0; i<n; i++){
        if(marks[i] > l){
            l = marks[i];
        }
    }
    cout << l <<endl;

    cout << "reversing" << endl;
    int p = 0;
    int q = n-1;
    for(int i=0 ; i<n/2 ; i++){
        swap(marks[p],marks[q]);
        p++; q--;
    }
    for(int i : marks){
        cout<< i <<endl;
    }
}

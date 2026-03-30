#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {8,7,6,5,4};

    for(int i = 0 ; i<n ; i++){
        int min = arr[i], ind = i;
        for(int j = i+1 ; j < n  ;  j++){
            if(arr[j] <min){
                ind = j;
            }
            }
            swap(arr[i] , arr[ind]);
        }

    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream> 
using namespace std;

void reverse(int arr[], int n) {
    int *ptr = arr; 

    for (int i = 0; i < n / 2; i++) {
        int temp = *(ptr + i);                 
        *(ptr + i) = *(ptr + (n - i - 1));      
        *(ptr + (n - i - 1)) = temp;            
    }
}

int main(){
    int n;
    cout << "Enter the size fo the array "; cin >> n ;
    int arr[n];

    for(int i =0 ; i<n ; i++){
        cout << "Enter the " << i+1 << "th element :" ; cin >> arr[i];
    }

    reverse(arr , n);

    for (int i = 0 ; i < n ; i ++ ){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
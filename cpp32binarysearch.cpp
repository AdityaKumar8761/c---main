#include <iostream>
using namespace std;

int binaryS(int arr[] , int n , int val){
    int st = 0 , end = n-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid]> val) {
            // left 
            end = mid;
        }else if (arr[mid] < val){
            //right
            st = mid;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binaryS(arr, n , 5) << endl;
    return 0;
}
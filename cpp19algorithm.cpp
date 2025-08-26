#include <iostream>
using namespace std;

int linearSearch(int arr[],int size, int target){
    for(int i = 0 ; i< size ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1 ;
}

int main(){
    int arr[] = {4,2,5,6,3,2,5,0,3,8,4,3};
    int size = sizeof(arr)/sizeof(int);
    int target = 5;
    cout << linearSearch(arr,size,target) << endl;

    return 0;
}
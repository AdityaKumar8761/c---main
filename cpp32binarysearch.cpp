#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int st = 0 , end = arr.size()-1;

    while(st<=end){
        int mid = st+((end - st)/2);

        if(target>arr[mid]){
            st = mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int BS(vector <int> arr, int target,int st,int end){
    if(st<= end){
    int mid = st+ (end-st)/2;
    if(target > arr[mid]){
        return BS(arr,target,mid+1,end);
    }
    else if (target < arr[mid]){
        return BS(arr , target , st , mid-1);
    }
    else{
        return mid;
    }
  }
  return -1;
}

int main(){
    vector <int> arr = {-1,0,3,4,5,9,12};
    int target = 12;
    cout << BS(arr,target,0,arr.size()-1) << endl;

    vector <int> arr2 ={-1,0,3,5,12};
    int target2=0;
    cout << BS(arr2,target2,0,arr2.size()-1) << endl;


    return 0;
}
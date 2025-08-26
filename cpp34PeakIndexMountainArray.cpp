#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Peark(vector<int> arr){
    int st = 0, end = arr.size()-1;

    while(st<=end){
    int mid = st + (end - st)/2;

    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        return mid;
    }
    else if(arr[mid] < arr[mid+1]){
        st = mid;
    }
    else{
        end = mid;
    }
}
return 0;
}

int main(){
    vector <int> arr = {0,1,3,2,1,0};
    cout << Peark(arr) << endl;

    return 0;
}
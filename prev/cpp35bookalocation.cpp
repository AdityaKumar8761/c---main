#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n,int m, int mid ){
    int stu=1 , pages=0;

    for (int i =0 ; i<n ; i++ ){
        if(arr[i] > mid){
            return 0;
        }

        if(pages + arr[i] <= mid){
            pages += arr[i];
        }else {
            stu ++ ;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
};

int allocateBoodks(vector<int>& arr, int n, int m) {
    if(m>n){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int l = 0, b = sum, mid ;
    int ans = -1;
    while (l <= b){
        mid = l+ (b-l)/2;
        if(isValid(arr,n,m,mid)){ //left
            ans =mid;
            b= mid -1;
        }else{
            l = mid+1;
        }
    }
    return ans;
};


int main(){
    vector<int> arr = {2,1,3,4};
    int n =4,m=2;

    cout << allocateBoodks(arr,n,m) << endl;
    return 0;
}
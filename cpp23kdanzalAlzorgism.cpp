#include <iostream>
using namespace std;
#include <vector> 

//kzand algorithom

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int maxSum = INT_MIN;

//     for(int st = 0 ; st < n ; st++){
//         int cs = 0;
//         for(int end = st ; end< n ; end ++){
//             cs += arr[end];
//             maxSum = max(cs ,maxSum);
//         }
//     }
//     cout << maxSum << endl;
    

//     return 0;
// }

int maxSubArray(vector <int>& arr){
    int currentSum =0 ;
    int maxSum = 100000000;

    for(int val : arr){
         currentSum += val;
         maxSum = max(currentSum , maxSum);
         if(currentSum < 0){
            currentSum = 0;
         }
    }
    return maxSum ;
}

int main(){
    vector <int> arr = {-2,-1,-3};
    int n = sizeof(arr)/sizeof(int);

    cout << maxSubArray(arr);


    return 0;
}
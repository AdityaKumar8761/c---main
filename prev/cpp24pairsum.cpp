#include <iostream>
#include <vector>
using namespace std;


//---->brute force aproach

// vector<int> PairSum(vector<int> arr , int target){
//     vector <int> ans ;

//     for(int i = 0 ; i<arr.size() ; i++ ){
//         for (int j = i+1 ; j<arr.size() ; j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     cout << "no pair found "<< endl;
//     return ans;
// }

// int main(){
//     vector <int> arr = {2,7,11,15};
//     int target = 26;

//     cout << PairSum(arr , target)[0] << " " << PairSum(arr,target)[1];

//     return 0 ;
// } 


//-----> if shorted array given

void twoPointer(vector <int> arr, int target){
vector<int> ans;
int i = 0;
int j = arr.size()-1;
while(i<j){
    int ps = arr[i] + arr[j];
    if(ps > target){
        j--;
    }
    else if(ps < target){
        i++;
    }
    else {
        ans.push_back(i);
        ans.push_back(j);
        break;
    }
}

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
} 


int main(){
    vector <int> arr = {2 ,7 ,11, 15};
    int target = 26;

    twoPointer(arr , target);

    return 0;
}
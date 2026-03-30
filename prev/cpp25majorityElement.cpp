#include <iostream>
#include <vector>
#include <algorithM>
using namespace std;

//----> Majority element

//----> brute force aproach
int BF(vector <int> arr){
    int n = arr.size()/2;
    int MEc = 1;

    for (int i = 0 ; i<n+1 ; i++ ){
        for (int j = i+1 ; j < arr.size() ; j++){
            if(arr[i] == arr[j]){
                MEc += 1;
            }
        }
        if(MEc > n){
            return arr[i];
        }
        else{
            MEc = 1;
        }
    }
    return -1;
}

int OP(vector<int> nums){
    int n = nums.size();
    sort(nums.begin() , nums.end());
    int freq =1 , ans = nums[0];
    for(int i =1 ; i<n ; i++){
        if(nums[i] == nums[i- 1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        }
    }
    return ans;
}


//----> moore's voting algo{1,2,2,1,1,1}
int moorsVotingalgo(vector<int> nums){
    int freq = 0 , ans = 0;

    for(int i = 0 ; i<nums.size() ; i++){
        if(freq == 0){
            ans = nums[i];

        }
        if(ans == nums[i]){
            freq++;
        }
        else {
             freq-- ;
        }
    }
    return ans;

}

int main(){
    vector <int> arr = {1,2,2,1,1};
    
    cout << BF(arr) << endl;
    cout << OP(arr) << endl;
    cout << moorsVotingalgo(arr) << endl;
    return 0;
}
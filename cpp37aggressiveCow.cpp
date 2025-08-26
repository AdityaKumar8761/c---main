#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &arr , int m , int mid){
    int cows=1 , lastStallPos = arr[0];
    for(int i = 1 ; i<arr.size() ; i++){
        if((arr[i] - lastStallPos) >= mid){
            cows ++;
            lastStallPos = arr[i];
        }
        if(cows == m) return 1;
    }
    return 0;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin() , position.end());
    if(m > position.size()) return-1;
    int st = 1 , mi = position[0], ma =position[position.size()-1] , ans = -1;
    int end = ma - mi;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(isValid(position, m , mid)){//true
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;

}


int main(){
    vector <int> arr = {1,2,8,4,9};
    int m = 3;

    cout << maxDistance(arr,m);

    return 0;
}
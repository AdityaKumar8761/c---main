#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr , int mid , int m){
    int painter =  1 ,time =0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            painter ++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int solution(vector<int> arr , int m){
    if(m>arr.size()){
        return -1;
    }
    int st = 0 , end = 0 , ans = -1;
    int size= arr.size();

    for(int i = 0 ; i < size ; i++){
        st = max(st, arr[i]);
        end += arr[i];
    }

    while(st<= end){
        int mid = st + (end-st)/2;
        if(isValid(arr,mid,m)){//true
            ans = mid;
            end= mid-1;
        } 
        else{  //false
            st = mid+1;
        }
    }
    return ans;

}

int main(){
    vector <int> arr = {40,30,10,20};
    int m =2;
    
    cout << solution(arr , m) << endl;

    return 0;
}



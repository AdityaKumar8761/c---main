#include <iostream>
#include <vector>
using namespace std;

int maxWaterBF(vector<int>height){
    int water = 0;

    for(int i = 0 ; i< height.size()-1 ; i++){
        for(int j = i+1 ; j< height.size() ; j++){
            int nW = (j-i)*min(height[i],height[j]);
            water = max(water , nW);
        }
    }

    return water;
}

int twoPointerMW(vector<int> height){
    int lp = 0, rp = height.size() -1 ,ans =0;
    while(lp<rp){
        int CWH = (rp-lp) * min(height[lp] , height[rp]);
        ans = max(ans, CWH);
        height[lp] < height[rp] ? lp ++ : rp -- ;
    }

    return ans;
}

int main(){
    vector <int> count = {1,8,6,2,5,4,8,3,7};
    cout << maxWaterBF(count) << endl; 
    cout << twoPointerMW(count)   ;

    return 0;
}
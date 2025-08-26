#include <iostream>
#include <vector>
using namespace std;

int unikeValue(vector<int> v ){
    int ans = 0;
    for ( int i : v) ans ^= i;
    return ans;
}

int main(){
    vector <int> vec = {4,1,2,1,2};
    cout << unikeValue(vec) << endl;
    return 0;
}
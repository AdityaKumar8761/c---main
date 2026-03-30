#include <iostream>
#include <vector>
using namespace std;

void sp(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
};

void bubble(vector <int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        bool isSwap =false;

        for(int j = 0 ; j < n -i-1; j++){
            if(arr[j] > arr[j+1]){
                sp(arr[j], arr[j+1]);
            }
        }
    }
};

int main(){
    vector <int> arr = {5, 1, 4, 2, 8};
    bubble(arr);
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Question 1:

// A real estate agency lists properties in order of their prices. As new properties are listed, they must be inserted into the list in the correct price order.  

// Write a program in c++ to implement using insertion sort that inserts a new property into the correct position in a sorted list of property prices.

// *Note: Real estate prices can also include prices like (Rs. 26989.80)

void insertionSort(vector<float> &arr , int n){
    for(int i = 1; i<n ; i++){
        int curr = arr[i] , prev = i-1;
        while(prev>= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev --;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    vector<float> arr;
    int n;
    cout << "Enter the number of property to take input :" ; cin >> n;
    for (int i=0; i<n ; i++){
        int input;
        cout<<"enter the value of the propert :" ; cin >> input;
        arr.push_back(input);
    }


    insertionSort(arr,n);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
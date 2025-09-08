#include <iostream>
#include <vector>
using namespace std;

// Question 2:  
// Problem Statement:  
// Assume that you are in the process of developing a compact software application to facilitate the organization of book IDs for a library. The librarian is required to sort each book ID in ascending order using a modified version of the Bubble Sort algorithm. Furthermore, the librarian is interested in the number of swaps necessary to organize them in the sorted order.

// You are required to develop a C++ program that:  
// - Accepts an array of book IDs from the user as input.
// - Employs a modified Bubble Sort algorithm to sort the array.
// 3 / 6
// - Counts and displays the number of exchanges necessary to sort the array.
// Input Format:
// § Line 1 reads the size of the array
// § Line 2 reads the array elements
// Output Format:
// § Print the sorted array and the number of swaps required

void bubbleSort(int arr[] , int n){
    int countSwaps = 0;
    for(int i = 0; i<n-1 ; i++){
        for(int j = 0; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                countSwaps++;
            }
        }
    }

    for (int i = 0 ; i<n;i++){
        cout<<arr[i] << " ";
    }
    cout << "Number of swaps required : " << countSwaps << endl;
}

int main(){
    int n;
    cout << "enter the size of the arr :" ; cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        int input;
        cout << "enter the " << i << " element :" ; cin >> input; arr[i] = input;
    }

    bubbleSort(arr,n);

    return 0;
}
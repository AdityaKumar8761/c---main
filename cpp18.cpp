#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    for(int i=0 ; i<size ; i++){
        arr[i] = 2*arr[i];
    }
}

int main(){
    int array[] = {1,3,5,7,9};
    int size =sizeof(array)/sizeof(int);

    changeArr(array,size);

    cout << "The change array is " << endl;
    for(int i = 0 ; i<size ; i++){
        cout << array[i] << endl;
    }

    return 0;
}




// int main(){int num [] = {23,3,34,6,-34,6,34,4,34,1,23};
//     int size = sizeof(num)/sizeof(int);
//     int smallest = INT_MAX;
//     int index = 0;
//     for(int i = 0 ; i < size ; i++){if(num[i] < smallest){smallest = num[i];index = i;}}
//     cout << "The smallest number is " << smallest << endl ;
//     cout << "The index of the smallest is " << index << endl ;
//     return 0;}

    //pass by reference
    //used for nonprimitive data type
    
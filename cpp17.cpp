#include <iostream>
using namespace std;

//         ----->Array<-----
// 1.Same type of data
// 2.Continuous in memory + linear

int main(){
    int marks[5] = {99,100,33,78,32};

    //size of array --> sizeof(array)/sizeof(data type of array)
    int size = sizeof(marks) / sizeof(int) ;

    for(int i = 0 ; i < size ; i++){
        cout << marks[i] << endl;
    }

    return 0;
    
}


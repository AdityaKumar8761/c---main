// while
// for
// do-while

#include <iostream>
using namespace std;

int main(){
    // int i = 1 ;
    // while(i<=5){
    //     cout << i << " ";
    //     i++;
    // }

    int sum = 0;
    int j = 1;
    int u ;
    cout << "enter the number for sum: ";
    cin >> u ;


    while(j <=u){
        sum += j;
        j++;
        if(j == 1000) break;

    }
    cout << "sum =" << sum << endl;

    //for loop
    //for(initialisation ; condition ; updation){
    // ... work}

    for (int i = 1 ; i < 10 ; i++){
        cout << i << endl;
    }


    //do while loop
    //do{
    //  cout << work << endl;
    //  I++
    //}while(condition);

    return 0;

}
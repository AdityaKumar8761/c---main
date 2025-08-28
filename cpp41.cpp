// digits of a number

#include <iostream>
using namespace std;

int main(){
    int n = 3534;

    while(n != 0){
        int digit = n%10;
        cout << digit << endl;

        n = n / 10;
    }
    return 0;
}
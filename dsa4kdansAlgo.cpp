#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]= {3,-4,5,4,-1,7,-8};
    int n = 7;
    int intmax = INT_MIN;

    for(int st = 0 ; st < n ; st++){
        int current = 0;
        for(int end = st ; end < n ; end++){
            current += arr[end];
            intmax = max(intmax, current);
        }
    }

    cout << intmax << endl;

    //by kadane's algorithm 
    int cs = 0 ; int maxsum = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        cs += arr[i];
        maxsum = max(cs , maxsum);
        if(cs < 0 ){
            cs = 0;
        }
    }

    cout << maxsum;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


//Binary Exponentiation
double myPow(double x, int n){
    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int StockBS(vector<int> price){
    int maxProfit = 0 , bestBuy = price[0] ;
    
    for (int i = 0 ; i < price.size() ; i++ ){
        if(price[i] > bestBuy){
            maxProfit = max(maxProfit , price[i] - bestBuy);
        }
        bestBuy = min(bestBuy , price[i]);
    }
    return maxProfit;

}

int main(){
    vector <int> arr = {7,1,5,3,6,4};


    return 0;
}
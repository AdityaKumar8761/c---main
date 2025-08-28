#include <iostream>
using namespace std;


int gcd(int a, int b){
    while (a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }

    if(a==0) return b;
    return a;
    
};

int gcdrec(int a, int b){
    if(b == 0){
        return a;
    }
    return gcdrec(b, a%b);
};

int hcf(int a , int b){
    if(a>=b){
        return gcdrec(a,b);
    }else{
        return gcdrec(b,a);
    }
}

int lcm(int a,int b){
    return (a*b)/hcf(a,b);
}
    int rev(int a) {
    int num = 0;
    while(a != 0) {
        int dig = a % 10;
        num = num * 10 + dig;  
        a /= 10;               
    }
    return num;
    }

int main(){
    cout << gcd(632,847) <<endl;
    cout << hcf(324,23424) << endl;
    cout << lcm(55,43) << endl;
    cout << rev(10) << endl;

    return 0;
}
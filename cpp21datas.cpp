#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    for(int i : vec) cout << i << endl;
    cout << "size = " << vec.size() << endl;
    cout << "The capacity of the vector is " << vec.capacity() << endl;
    return 0;
}

//compile time ---> Static allocation (Arrays are static element)
//run time     ---> Dynamic allocation(Vector are dynamc eldment)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec; //0

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec[2] << "or" << vec.at(2) << endl;

    for(auto i =vec.begin(); i!=vec.end(); i++){
        cout << *(i) <<endl;
    }//pointer vec.begin so use * to deference the iterator
    

    return 0;
}

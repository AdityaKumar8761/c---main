#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    for (int i = 0; i <n; i++) {
        char k = 'A' + i;
        for (int j = 0; j < i+1; j++) {
            cout << k;
            k --;
        }
        cout << endl;
    }

    return 0;
}

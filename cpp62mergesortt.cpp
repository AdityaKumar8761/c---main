#include <iostream>
using namespace std;

void merge(int arr[], int st, int mid, int end) {
    int n = end - st + 1;          
    int temp[n];                   
    
    int i = st, j = mid + 1, k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    
    while (j <= end) {
        temp[k++] = arr[j++];
    }

    
    for (int idx = 0; idx < n; idx++) {
        arr[st + idx] = temp[idx];
    }
}

void devide(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        devide(arr, start, mid);
        devide(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {12, 31, 35, 8, 32, 17};
    int st = 0, end = 5;

    devide(arr, st, end);

    for (int i = 0; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

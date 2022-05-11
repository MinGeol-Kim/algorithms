#include <iostream>

using namespace std;

int main() {
    int n, max;
    cin >> n;
    int* arr = new int[n], *rarr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0) max = arr[i];
        if(max < arr[i]) max = arr[i];
    }
    int carr[max + 1] = {0};
    for(int i = 0; i < n; i++) {
        carr[arr[i]] += 1;
    }
    for(int i = 1; i < max + 1; i++) {
        carr[i] += carr[i-1];
    }
    for(int i = n-1; i >= 0; i--) {
        rarr[--carr[arr[i]]] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << rarr[i] << endl;
    }
    
    delete arr, rarr;
}
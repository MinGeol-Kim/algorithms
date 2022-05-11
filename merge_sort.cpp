#include <iostream>

using namespace std;

void mergesort(int* arr, int left, int right);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergesort(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
    delete arr;
}

void mergesort(int* arr, int left, int right) {
    if(left < right) {
        int mid = (right + left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        int* tmparr = new int[right+1];
        int acnt = left, bcnt = mid + 1, tmpcnt = 0;
        while(acnt <= mid && bcnt <= right) {
            if(arr[acnt] < arr[bcnt]) {
                tmparr[tmpcnt++] = arr[acnt++]; 
            }
            else if(arr[acnt] > arr[bcnt]) {
                tmparr[tmpcnt++] = arr[bcnt++];
            }
        }
        if(acnt == mid+1) {
            while(bcnt <= right) {
                tmparr[tmpcnt++] = arr[bcnt++];
            }        
        }
        else if(bcnt == right+1) {
            while(acnt <= mid) {
                tmparr[tmpcnt++] = arr[acnt++];
            }            
        }
        for(int i = left; i <= right; i++) {
            arr[i] = tmparr[i - left];
        }
        delete tmparr;
    }
}
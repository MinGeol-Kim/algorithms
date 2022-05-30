#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int hashing(vector<int>, int, int, int);

int main() {
    int N;
    scanf("%d", &N);
    vector<int> v;
    for(int i = 0; i < N; i++) {
        int t;
        scanf("%d", &t);
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int M;
    scanf("%d", &M);
    vector<int> v2;
    for(int i = 0; i < M; i++) {
        int t;
        scanf("%d", &t);
        v2.push_back(t);
    }
    for(int i = 0; i < M; i++) {
        int right = N - 1;
        int left = 0;
        bool isExist = false;
        while(left <= right) {
            int mid = (right + left) / 2;
            if(v[mid] == v2[i]) {
                printf("1 ");
                isExist = true;
                break;
            }
            if(v[mid] > v2[i]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        if(!isExist) {
            printf("0 ");
        }
    }
}


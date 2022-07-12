#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int N, M;
int arr[9] = {0};
bool visited[9] = {0};

void dfs(int cnt) {
    if(cnt == M) {
        for(int i = 0; i < cnt; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    else {
        for(int i = 1; i <= N; i++) {
            if(!visited[i]) {
                visited[i] = true;
                arr[cnt] = i;
                dfs(cnt + 1);
                visited[i] = false;
            }
        }
    }
}


int main() {
    scanf("%d %d", &N, &M);
    dfs(0);
}

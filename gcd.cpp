#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int gcd(int a, int b) { // 최대 공약수를 유클리드 호제법을 이용해 구하는 함수
    int r = a % b;
    if(r == 0) return b;
    else return gcd(b, r);
}

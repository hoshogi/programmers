/*
Title   : 숫자 카드 나누기
Author  : Hoseok Lee
Date    : 2024/09/15

https://school.programmers.co.kr/learn/courses/30/lessons/135807
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b);
int calculate(int num, vector<int> array);

int solution(vector<int> arrayA, vector<int> arrayB) {
    int aGcd = arrayA[0];
    int bGcd = arrayB[0];
    
    for (auto it : arrayA) {
        aGcd = gcd(aGcd, it);
    }
    for (auto it : arrayB) {
        bGcd = gcd(bGcd, it);
    }
    aGcd = calculate(aGcd, arrayB);
    bGcd = calculate(bGcd, arrayA);
    return max(aGcd, bGcd);
}

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int calculate(int num, vector<int> array) {
    for (auto it : array) {
        if (num > it) {
            continue;
        }
        if (it % num == 0) {
            int div = gcd(num, it);
            num /= div;
        }
        if (num == 1) {
            return 0;
        }
    }
    return num;
}

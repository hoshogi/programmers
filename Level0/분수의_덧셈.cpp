/*
Title   : 분수의 덧셈
Author  : Hoseok Lee
Date    : 2022/10/31
https://school.programmers.co.kr/learn/courses/30/lessons/120808
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    int resultDenum = denum1 * num2 + denum2 * num1;
    int resultNum = num1 * num2;
    int divide = gcd(resultDenum, resultNum);
    
    return {resultDenum / divide, resultNum / divide};
}
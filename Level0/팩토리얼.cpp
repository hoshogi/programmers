/*
Title   : 팩토리얼
Author  : Hoseok Lee
Date    : 2022/12/10
https://school.programmers.co.kr/learn/courses/30/lessons/120848
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int num = 1;
    vector<int> factorial;
    
    for (int i = 1; i <= 10; i++) {
        num *= i;
        factorial.push_back(num);
    }
    return upper_bound(factorial.begin(), factorial.end(), n) - factorial.begin();
}
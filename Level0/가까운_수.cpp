/*
Title   : 가까운 수
Author  : Hoseok Lee
Date    : 2022/12/09
https://school.programmers.co.kr/learn/courses/30/lessons/120890
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 1e9, gap = 1e9;
    
    sort(array.begin(), array.end());
    for (auto it : array) {
        if (abs(it - n) < gap) {
            gap = abs(it - n);
            answer = it;
        }
    }
    return answer;
}
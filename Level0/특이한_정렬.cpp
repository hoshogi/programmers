/*
Title   : 특이한 정렬
Author  : Hoseok Lee
Date    : 2022/10/01
https://school.programmers.co.kr/learn/courses/30/lessons/120880
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int num;

bool compare(int prev, int next) {
    if (abs(prev - num) == abs(next - num))
        return prev > next;
    return abs(prev - num) < abs(next - num);
}

vector<int> solution(vector<int> numlist, int n) {
    num = n;
    sort(numlist.begin(), numlist.end(), compare);
    return numlist;
}

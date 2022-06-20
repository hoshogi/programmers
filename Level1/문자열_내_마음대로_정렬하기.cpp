/*
Title   : 문자열 내 마음대로 정렬하기
Author  : Hoseok Lee
Date    : 2022/06/20
https://programmers.co.kr/learn/courses/30/lessons/12915
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

bool compare(string prev, string next) {
    if (prev[i] == next [i])
        return prev < next;
    return prev[i] < next[i];
}

vector<string> solution(vector<string> strings, int n) {
    i = n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}

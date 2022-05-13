/*
Title   : 내적
Author  : Hoseok Lee
Date    : 2022/05/13
https://programmers.co.kr/learn/courses/30/lessons/70128
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for (int i = 0; i < a.size(); i++)
        answer += a[i] * b[i];
    
    return answer;
}

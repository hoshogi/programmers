/*
Title   : 배열의 유사도
Author  : Hoseok Lee
Date    : 2022/11/19
https://school.programmers.co.kr/learn/courses/30/lessons/120903
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0, start1 = 0, start2 = 0;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    while (start1 < s1.size() && start2 < s2.size()) {
        if (s1[start1] == s2[start2]) {
            answer++;
            start1++;
            start2++;
        }
        else if (s1[start1] < s2[start2]) 
            start1++;
        else 
            start2++;
    }
    return answer;
}
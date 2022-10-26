/*
Title   : 중복된 숫자 개수
Author  : Hoseok Lee
Date    : 2022/10/26
https://school.programmers.co.kr/learn/courses/30/lessons/120583
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for (auto it : array) {
        if (n == it)
            answer++;
    }
    return answer;
}
/*
Title   : 겹치는 선분의 길이
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120876
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int line[401] = {0, };
    
    for (auto it : lines) {
        for (int i = it[0] * 2 + 1; i < it[1] * 2; i += 2) 
            line[i + 200]++;
    }
    
    for (int i = 0; i <= 400; i++) {
        if (line[i] >= 2)
            answer++;
    }
    return answer;
}
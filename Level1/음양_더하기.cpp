/*
Title   : 음양 더하기
Author  : Hoseok Lee
Date    : 2022/06/28
https://programmers.co.kr/learn/courses/30/lessons/76501
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for (int i = 0; i < absolutes.size(); i++) {
        if (signs[i])
            answer += absolutes[i];
        else
            answer -= absolutes[i];
    }
    return answer;
}

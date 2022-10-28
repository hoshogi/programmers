/*
Title   : 머쓱이보다 키 큰 사람
Author  : Hoseok Lee
Date    : 2022/10/28
https://school.programmers.co.kr/learn/courses/30/lessons/120585
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for (auto it : array) 
        if (it > height)
            answer++;
    return answer;
}
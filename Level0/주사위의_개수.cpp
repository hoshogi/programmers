/*
Title   : 주사위의 개수
Author  : Hoseok Lee
Date    : 2022/11/30
https://school.programmers.co.kr/learn/courses/30/lessons/120845
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    
    for (int i = 0; i < 3; i++) 
        answer *= box[i] / n;
    return answer;
}
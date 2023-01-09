/*
Title   : 과일 장수
Author  : Hoseok Lee
Date    : 2023/01/09
https://school.programmers.co.kr/learn/courses/30/lessons/135808
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<>());
    for (int i = m - 1; i < score.size(); i += m)
        answer += score[i] * m;
    return answer;
}
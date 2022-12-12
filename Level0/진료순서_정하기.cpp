/*
Title   : 진료순서 정하기
Author  : Hoseok Lee
Date    : 2022/12/12
https://school.programmers.co.kr/learn/courses/30/lessons/120835
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> result(emergency);
    int order[101] =  {0, };
    
    sort(result.begin(), result.end(), greater<>());
    for (int i = 0; i < result.size(); i++) 
        order[result[i]] = i + 1;
    for (auto it : emergency) 
        answer.push_back(order[it]);
    return answer;
}
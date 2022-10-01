/*
Title   : 연속된 수의 합
Author  : Hoseok Lee
Date    : 2022/10/02
https://school.programmers.co.kr/learn/courses/30/lessons/120923
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum = num * (num + 1) / 2;
    int start = (total - sum) / num + 1;
    
    for (int i = start; i < start + num; i++)
        answer.push_back(i);
    return answer;
}

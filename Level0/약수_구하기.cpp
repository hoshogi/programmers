/*
Title   : 약수 구하기
Author  : Hoseok Lee
Date    : 2022/10/27
https://school.programmers.co.kr/learn/courses/30/lessons/120897
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            answer.push_back(i);
    answer.push_back(n);
    return answer;
}
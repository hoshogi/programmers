/*
Title   : 최고의 집합
Author  : Hoseok Lee
Date    : 2023/02/06
https://school.programmers.co.kr/learn/courses/30/lessons/12938
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    
    int div = s / n;
    if (div == 0)
        return {-1};
    for (int i = 0; i < n; i++) 
        answer.push_back(div);
    int left = s - div * n;
    for (int i = n - 1; i >= n - left; i--)
        answer[i]++;
    return answer;
}
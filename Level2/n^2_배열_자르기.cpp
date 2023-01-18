/*
Title   : n^2 배열 자르기
Author  : Hoseok Lee
Date    : 2023/01/18
https://school.programmers.co.kr/learn/courses/30/lessons/87390
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long i = left; i <= right; i++) {
        int num = i / n;
        int left = i % n;
        
        if (left <= num) 
            answer.push_back(num + 1);
        else 
            answer.push_back(num + 1 + left - num);
    }
    return answer;
}
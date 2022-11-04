/*
Title   : 배열 자르기
Author  : Hoseok Lee
Date    : 2022/11/04
https://school.programmers.co.kr/learn/courses/30/lessons/120833
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    
    for (int i = num1; i <= num2; i++)
        answer.push_back(numbers[i]);
    return answer;
}
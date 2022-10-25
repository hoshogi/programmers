/*
Title   : 배열의 평균값
Author  : Hoseok Lee
Date    : 2022/10/25
https://school.programmers.co.kr/learn/courses/30/lessons/120817
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    
    for (auto it : numbers)
        sum += it;
    return (double)sum / numbers.size();
}
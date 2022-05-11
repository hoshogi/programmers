/*
Title   : 평균 구하기
Author  : Hoseok Lee
Date    : 2022/05/11
https://programmers.co.kr/learn/courses/30/lessons/12944
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for (auto it : arr)
        answer += it;
    answer /= arr.size();
    return answer;
}

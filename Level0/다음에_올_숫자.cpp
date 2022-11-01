/*
Title   : 다음에 올 숫자
Author  : Hoseok Lee
Date    : 2022/11/01
https://school.programmers.co.kr/learn/courses/30/lessons/120924
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {   
    if (common[2] - common[1] == common[1] - common[0]) 
        return common.back() + common[1] - common[0];
    return common.back() * common[1] / common[0];
}
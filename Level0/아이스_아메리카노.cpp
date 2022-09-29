/*
Title   : 아이스 아메리카노
Author  : Hoseok Lee
Date    : 2022/09/29
https://school.programmers.co.kr/learn/courses/30/lessons/12913
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    answer.push_back(money / 5500);
    answer.push_back(money % 5500);
    return answer;
}

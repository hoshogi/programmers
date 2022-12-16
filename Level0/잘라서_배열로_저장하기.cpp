/*
Title   : 잘라서 배열로 저장하기
Author  : Hoseok Lee
Date    : 2022/12/16
https://school.programmers.co.kr/learn/courses/30/lessons/120913
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for (int i = 0; i < my_str.length(); i += n) 
        answer.push_back(my_str.substr(i, n));
    return answer;
}
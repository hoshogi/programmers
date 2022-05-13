/*
Title   : 자연수 뒤집어 배열로 만들기
Author  : Hoseok Lee
Date    : 2022/05/13
https://programmers.co.kr/learn/courses/30/lessons/12932
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
        answer.push_back(str[i] - '0');
    return answer;
}

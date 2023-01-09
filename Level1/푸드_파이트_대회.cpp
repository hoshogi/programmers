/*
Title   : 푸드 파이트 대회
Author  : Hoseok Lee
Date    : 2023/01/09
https://school.programmers.co.kr/learn/courses/30/lessons/134240
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 0; i < food.size(); i++) {
        for (int j = 0; j < food[i] / 2; j++) 
            answer += to_string(i);
    }
    
    string tmp(answer);
    reverse(tmp.begin(), tmp.end());
    answer += "0" + tmp;
    return answer;
}
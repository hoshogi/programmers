/*
Title   : 서울에서 김서방 찾기
Author  : Hoseok Lee
Date    : 2022/05/14
https://programmers.co.kr/learn/courses/30/lessons/12919
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer;

    int index = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer = "김서방은 " + to_string(index) + "에 있다";
    return answer;
}

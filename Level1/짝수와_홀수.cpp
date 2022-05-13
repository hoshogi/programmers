/*
Title   : 짝수와 홀수
Author  : Hoseok Lee
Date    : 2022/05/13
https://programmers.co.kr/learn/courses/30/lessons/12937
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = num % 2 == 0 ? "Even" : "Odd";
    return answer;
}

/*
Title   : 124 나라의 숫자
Author  : Hoseok Lee
Date    : 2022/07/22
https://school.programmers.co.kr/learn/courses/30/lessons/12899
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char transfer(int num) {
    if (num == 0)
        return '1';
    if (num == 1)
        return '2';
    if (num == 2)
        return '4';
}

string solution(int n) {
    string answer = "";
    
    while (n != 0) {
        answer += transfer((n - 1) % 3);
        --n /= 3;
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}

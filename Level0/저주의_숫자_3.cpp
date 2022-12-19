/*
Title   : 저주의 숫자 3
Author  : Hoseok Lee
Date    : 2022/12/19
https://school.programmers.co.kr/learn/courses/30/lessons/120871
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

bool check(int num) {
    string str = to_string(num);
    
    if (num % 3 == 0)
        return true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '3')
            return true;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    
    for (int i = 0; i < n; i++) {
        answer++;
        while (check(answer))
            answer++;
    }
    return answer;
}
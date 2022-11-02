/*
Title   : 숨어있는 숫자의 덧셈 (2)
Author  : Hoseok Lee
Date    : 2022/11/02
https://school.programmers.co.kr/learn/courses/30/lessons/120864
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    string num = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9')
            num += my_string[i];
        else {
            if (num != "") {
                answer += stoi(num);
                num = "";
            }
        }
    }
    if (num != "")
        answer += stoi(num);
    return answer;
}
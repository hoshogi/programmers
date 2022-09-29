/*
Title   : 369게임
Author  : Hoseok Lee
Date    : 2022/09/30
https://school.programmers.co.kr/learn/courses/30/lessons/120891
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    string str = to_string(order);
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
            case '3':
            case '6':
            case '9':
                answer++;
        }
    }
    
    return answer;
}

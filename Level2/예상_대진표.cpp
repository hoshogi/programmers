/*
Title   : 예상 대진표
Author  : Hoseok Lee
Date    : 2022/10/13
https://school.programmers.co.kr/learn/courses/30/lessons/12985
https://github.com/hoshogi
*/

#include <iostream>

using namespace std;

int solution(int n, int a, int b) {
    int answer = 0;
    int temp = a;
    
    if (a > b) {
        a = b;
        b = temp;
    }
    
    while (true) {
        answer++;
        
        if (b - a == 1 && b % 2 == 0)
            return answer;
        
        if (a % 2 == 0)
            a /= 2;
        else
            a = a / 2 + 1;
        
        if (b % 2 == 0)
            b /= 2;
        else
            b = b / 2 + 1;
    }
    return answer;
}

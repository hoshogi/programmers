/*
Title   : 합성수 찾기
Author  : Hoseok Lee
Date    : 2022/12/08
https://school.programmers.co.kr/learn/courses/30/lessons/120846
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; i++) {
        int count = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
            if (count >= 3) {
                answer++;
                break;
            }
        }
    }
    return answer;
}
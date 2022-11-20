/*
Title   : 순서쌍의 개수
Author  : Hoseok Lee
Date    : 2022/11/20
https://school.programmers.co.kr/learn/courses/30/lessons/120836
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            answer++;
    }
    return answer;
}
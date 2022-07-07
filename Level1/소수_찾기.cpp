/*
Title   : 소수 찾기
Author  : Hoseok Lee
Date    : 2022/07/07
https://school.programmers.co.kr/learn/courses/30/lessons/12921
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool check[1000001] = {false, };
    
    for (int i = 2; i <= n; i++) {
        if (!check[i]) {
            answer++;
            for (int j = 2 * i; j <= n; j += i)
                check[j] = true;
        }
    }
    
    return answer;
}

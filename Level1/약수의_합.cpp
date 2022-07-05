/*
Title   : 약수의 합
Author  : Hoseok Lee
Date    : 2022/07/05
https://school.programmers.co.kr/learn/courses/30/lessons/12928
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            answer += i;
            
    return answer;
}

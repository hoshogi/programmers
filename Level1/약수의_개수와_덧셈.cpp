/*
Title   : 약수의 개수와 덧셈
Author  : Hoseok Lee
Date    : 2022/07/06
https://school.programmers.co.kr/learn/courses/30/lessons/77884
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int calculate(int a) {
    int count = 0;
    
    for (int i = 1; i <= a; i++)
        if (a % i == 0)
            count++;
    
    return count;
}

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; i++) {
        if (calculate(i) % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    
    return answer;
}

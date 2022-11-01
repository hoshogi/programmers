/*
Title   : 소인수분해
Author  : Hoseok Lee
Date    : 2022/11/01
https://school.programmers.co.kr/learn/courses/30/lessons/120852
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int i = 2; i <= n; i++) {
        if (n == 1)
            break;
        if (n % i == 0)
            answer.push_back(i);
        while (n % i == 0) 
            n /= i;
    }
    return answer;
}
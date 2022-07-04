/*
Title   : 3진법 뒤집기
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/68935
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string num = "";
    
    while (true) {
        if (n == 0)
            break;
        num += to_string(n % 3);
        n /= 3;
    }

    reverse(num.begin(), num.end());
    int mul = 1;
    for (int i = 0; i < num.length(); i++) {
        answer += (num[i] - '0') * mul;
        mul *= 3;
    }
    
    return answer;
}

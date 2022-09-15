/*
Title   : 점프와 순간 이동
Author  : Hoseok Lee
Date    : 2022/09/15
https://school.programmers.co.kr/learn/courses/30/lessons/12980
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while (n != 0) {
        if (n % 2 == 0)
            n /= 2;
        else {
            ans++;
            n--;
        }
    }

    return ans;
}

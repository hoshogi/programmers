/*
Title   : 치킨 쿠폰
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120884
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    
    while (chicken >= 10) {
        int coupon = chicken / 10;
        answer += coupon;
        chicken %= 10;
        chicken += coupon;
    }
    return answer;
}
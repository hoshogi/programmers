/*
Title   : 옷가게 할인 받기
Author  : Hoseok Lee
Date    : 2022/11/21
https://school.programmers.co.kr/learn/courses/30/lessons/120818
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if (price >= 500000)
        return price * 0.8;
    if (price >= 300000)
        return price * 0.9;
    if (price >= 100000)
        return price * 0.95;
    return price;
}
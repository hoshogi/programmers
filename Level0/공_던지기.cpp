/*
Title   : 공 던지기
Author  : Hoseok Lee
Date    : 2022/12/20
https://school.programmers.co.kr/learn/courses/30/lessons/120843
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int index = 0;
    
    for (int i = 0; i < k - 1; i++) {
        index += 2;
        index %= numbers.size();
    }
    return numbers[index];
}
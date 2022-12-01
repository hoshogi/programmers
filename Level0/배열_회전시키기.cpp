/*
Title   : 배열 회전시키기
Author  : Hoseok Lee
Date    : 2022/12/01
https://school.programmers.co.kr/learn/courses/30/lessons/120844
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if (direction == "left") {
        numbers.push_back(numbers.front());
        numbers.erase(numbers.begin());
    }
    else {
        numbers.insert(numbers.begin(), numbers.back());
        numbers.pop_back();
    }
    return numbers;
}
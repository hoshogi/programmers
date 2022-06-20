/*
Title   : 하샤드 수
Author  : Hoseok Lee
Date    : 2022/06/20
https://programmers.co.kr/learn/courses/30/lessons/12947
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    string num = to_string(x);
    
    for (int i = 0; i < num.length(); i++)
        sum += num[i] - '0';
    if (x % sum == 0)
        return true;
    else
        return false;
}

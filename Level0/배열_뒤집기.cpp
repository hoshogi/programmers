/*
Title   : 배열 뒤집기
Author  : Hoseok Lee
Date    : 2022/10/30
https://school.programmers.co.kr/learn/courses/30/lessons/120821
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    reverse(num_list.begin(), num_list.end());
    return num_list;
}
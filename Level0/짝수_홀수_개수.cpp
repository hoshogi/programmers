/*
Title   : 짝수 홀수 개수
Author  : Hoseok Lee
Date    : 2022/10/27
https://school.programmers.co.kr/learn/courses/30/lessons/120824
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int odd = 0, even = 0;
    
    for (auto it : num_list) {
        if (it % 2 == 0)
            even++;
        else
            odd++;
    }
    return {even, odd};
}
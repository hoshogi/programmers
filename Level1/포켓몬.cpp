/*
Title   : 포켓몬
Author  : Hoseok Lee
Date    : 2022/07/05
https://school.programmers.co.kr/learn/courses/30/lessons/1845
https://github.com/hoshogi
*/

#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s;
    for (auto it : nums) {
        s.insert(it);
        if (s.size() == nums.size() / 2)
            return nums.size() / 2;
    }
    return s.size();
}

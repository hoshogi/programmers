/*
Title   : 두 개 뽑아서 더하기
Author  : Hoseok Lee
Date    : 2022/05/15
https://programmers.co.kr/learn/courses/30/lessons/68644
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    
    sort(numbers.begin(), numbers.end());
    
    do {
        s.insert(numbers[0] + numbers[1]);
        reverse(numbers.begin() + 2, numbers.end());
    } while(next_permutation(numbers.begin(), numbers.end()));
    
    for (auto it : s)
        answer.push_back(it);
    
    return answer;
}

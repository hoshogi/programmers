/*
Title   : 가장 큰 수
Author  : Hoseok Lee
Date    : 2022/04/08
 https://programmers.co.kr/learn/courses/30/lessons/42746
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string prev, string next) {
    return prev + next > next + prev;
}

string solution(vector<int> numbers) {
    vector<string> v;
    string answer = "";
    
    for (int i = 0; i < numbers.size(); i++)
        v.push_back(to_string(numbers[i]));
    sort(v.begin(), v.end(), compare);
    if (v[0] == "0")
        return "0";
    for (auto it : v)
        answer += it;
    return answer;
}

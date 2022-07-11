/*
Title   : 최댓값과 최솟값
Author  : Hoseok Lee
Date    : 2022/07/11
https://school.programmers.co.kr/learn/courses/30/lessons/12939
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> v;
    string num = "";
    string answer = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            num += s[i];
            if (i == s.length() - 1)
                v.push_back(stoi(num));
        }
        else {
            v.push_back(stoi(num));
            num = "";
        }
    }
    
    sort(v.begin(), v.end());
    answer += to_string(v.front()) + " ";
    answer += to_string(v.back());
    
    return answer;
}

/*
Title   : 가장 가까운 같은 글자
Author  : Hoseok Lee
Date    : 2023/01/08
https://school.programmers.co.kr/learn/courses/30/lessons/142086
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int alphabet[26];
    
    fill_n(alphabet, 26, -1);
    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';
        if (alphabet[index] == -1) 
            answer.push_back(-1);
        else 
            answer.push_back(i - alphabet[index]);
        alphabet[index] = i;    
    }
    return answer;
}
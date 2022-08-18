/*
Title   : 성격 유형 검사하기
Author  : Hoseok Lee
Date    : 2022/08/18
https://school.programmers.co.kr/learn/courses/30/lessons/118666
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, int> m;

void GetPoint(char a, char b, int score) {
    if (score <= 3)
        m[a] += 4 - score;
    else if (score >= 4)
        m[b] += score - 4;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";

    for (int i = 0; i < survey.size(); i++) {
        string str = survey[i];
        GetPoint(str[0], str[1], choices[i]);
    }
    
    answer += m['R'] >= m['T'] ? "R" : "T";
    answer += m['C'] >= m['F'] ? "C" : "F";
    answer += m['J'] >= m['M'] ? "J" : "M";
    answer += m['A'] >= m['N'] ? "A" : "N";
    return answer;
}

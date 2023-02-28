/*
Title   : 카드 뭉치
Author  : Hoseok Lee
Date    : 2023/02/28
https://school.programmers.co.kr/learn/courses/30/lessons/159994
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int one = 0, two = 0;
    
    for (auto it : goal) {
        if (one < cards1.size() && it == cards1[one]) 
            one++;
        else if (two < cards2.size() && it == cards2[two])
            two++;
        else
            return "No";
    }
    return "Yes";
}
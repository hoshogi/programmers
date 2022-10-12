/*
Title   : 숫자 짝꿍
Author  : Hoseok Lee
Date    : 2022/10/12
https://school.programmers.co.kr/learn/courses/30/lessons/131128
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int count[10] = {0, };
    int xCount[10] = {0, };
    int yCount[10] = {0, };
    
    for (int i = 0; i < X.length(); i++)
        xCount[X[i] - '0']++;
    for (int i = 0; i < Y.length(); i++)
        yCount[Y[i] - '0']++;
    for (int i = 0; i < 10; i++)
        count[i] = min(xCount[i], yCount[i]);
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < count[i]; j++)
            answer += to_string(i);
    }
    
    if (answer == "")
        return "-1";
    if (answer[0] == '0')
        return "0";
    return answer;
}

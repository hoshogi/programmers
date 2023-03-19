/*
Title   : N진수 게임
Author  : Hoseok Lee
Date    : 2023/03/19
https://school.programmers.co.kr/learn/courses/30/lessons/17687
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string transfer(int num, int n) {
    string result = "";
    
    if (num == 0)
        return "0";
    
    while (num != 0) {
        int left = num % n;
        if (left < 10)
            result += to_string(left);
        else
            result += 'A' + left - 10;
        num /= n;
    }
    reverse(result.begin(), result.end());
    return result;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string str = "";
    int num = 0, count = 0;
    
    while (count < t) {
        str += transfer(num, n);
        num++;
        while (count * m + p <= str.length()) {
            answer += str[count * m + p - 1];
            count++;
            
            if (count == t)
                break;
        }
    }
    return answer;
}
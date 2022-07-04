/*
Title   : 2016년
Author  : Hoseok Lee
Date    : 2022/07/04
https://programmers.co.kr/learn/courses/30/lessons/12901
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string day[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num = 0;
    
    for (int i = 0; i < a - 1; i++)
        num += month[i];
    num += b;
    answer = day[num % 7];
    
    return answer;
}

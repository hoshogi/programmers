/*
Title   : 햄버거 만들기
Author  : Hoseok Lee
Date    : 2023/01/16
https://school.programmers.co.kr/learn/courses/30/lessons/133502
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string str = "";
    
    for (auto it : ingredient) {
        str += to_string(it);
        if (str.length() >= 4) {
            int index = str.length() - 4;
            if (str.substr(index) == "1231") {
                answer++;
                str.erase(index, 4);
            }
        }
    }
    return answer;
}
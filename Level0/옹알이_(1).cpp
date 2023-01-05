/*
Title   : 옹알이 (1)
Author  : Hoseok Lee
Date    : 2023/01/05
https://school.programmers.co.kr/learn/courses/30/lessons/120956
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (auto it : babbling) {
        bool can = false;
        for (int i = 0; i < it.length(); i++) {
            if (it[i] == 'a') {
                if (it.substr(i, 3) != "aya")
                    break;
                i += 2;
            }
            else if (it[i] == 'y') {
                if (it.substr(i, 2) != "ye")
                    break;
                i++;
            }
            else if (it[i] == 'w') {
                if (it.substr(i, 3) != "woo")
                    break;
                i += 2;
            }
            else if (it[i] == 'm') {
                if (it.substr(i, 2) != "ma")
                    break;
                i++;
            }
            else 
                break;
            if (i == it.length() - 1)
                can = true;
        }
        if (can)
            answer++;
    }
    return answer;
}
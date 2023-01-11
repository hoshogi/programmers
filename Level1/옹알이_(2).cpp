/*
Title   : 옹알이 (2)
Author  : Hoseok Lee
Date    : 2023/01/11
https://school.programmers.co.kr/learn/courses/30/lessons/133499
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (auto it : babbling) {
        string prev = "";
        bool can = false;
        for (int i = 0; i < it.length(); i++) {
            if (it[i] == 'a') {
                if (it.substr(i, 3) == "aya" && prev != "aya") {
                    i += 2;
                    prev = "aya";
                }
                else 
                    break;
            } 
            else if (it[i] == 'y') {
                if (it.substr(i, 2) == "ye" && prev != "ye") {
                    i++;
                    prev = "ye";
                }
                else 
                    break;
            } 
            else if (it[i] == 'w') {
                if (it.substr(i, 3) == "woo" && prev != "woo") {
                    i += 2;
                    prev = "woo";
                }
                else 
                    break;
            } 
            else if (it[i] == 'm') {
                if (it.substr(i, 2) == "ma" && prev != "ma") {
                    i++;
                    prev = "ma";
                }
                else 
                    break;
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
/*
Title   : 압축
Author  : Hoseok Lee
Date    : 2023/03/17
https://school.programmers.co.kr/learn/courses/30/lessons/17684
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> m;
    int next = 27;
    
    for (int i = 1; i <= 26; i++) {
        string temp = "";
        temp += 'A' + i - 1;
        m[temp] = i;
    }
    
    for (int i = 0; i < msg.length(); i++) {
        string temp = "";
        temp += msg[i];
        int result = m[temp];
        int count = 0;
        
        while (true) {
            if (m.find(temp) == m.end()) {
                answer.push_back(result);
                m[temp] = next;
                next++;
                i += count - 1;
                break;
            }
            else {
                result = m[temp];
                count++;
                if (count < msg.length()) {
                    temp += msg[i + count];
                }
                else {
                    answer.push_back(result);
                    break;
                }
            }
        }
    }
    return answer;
}
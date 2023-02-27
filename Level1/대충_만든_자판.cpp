/*
Title   : 대충 만든 자판
Author  : Hoseok Lee
Date    : 2023/02/27
https://school.programmers.co.kr/learn/courses/30/lessons/160586
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#define MAX 1e9

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int alphabet[26];
    
    fill_n(alphabet, 26, MAX);
    for (auto it : keymap) {
        for (int i = 0; i < it.length(); i++) 
            alphabet[it[i] - 'A'] = min(alphabet[it[i] - 'A'], i + 1);
    }
    
    for (auto it : targets) {
        int result = 0;
        
        for (int i = 0; i < it.length(); i++) {
            if (alphabet[it[i] - 'A'] == MAX) {
                result = -1;
                break;
            }
            result += alphabet[it[i] - 'A'];
        }   
        answer.push_back(result);
    }
    return answer;
}
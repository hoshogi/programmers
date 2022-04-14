/*
Title   : 신규 아이디 추천
Author  : Hoseok Lee
Date    : 2022/04/14
 https://programmers.co.kr/learn/courses/30/lessons/72410
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    int count = 0;
    char temp = 0;
    string answer = "";
    
    for (int i = 0; i < new_id.length(); i++) {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z') {
            answer += tolower(new_id[i]);
            count++;
            temp = new_id[i];
        } else if (new_id[i] == '-' || new_id[i] == '_' || (new_id[i] >= '0' && new_id[i] <= '9') || (new_id[i] >= 'a' && new_id[i] <= 'z')) {
            answer += new_id[i];
            count++;
            temp = new_id[i];
        } else if (new_id[i] == '.') {
            if (count == 0 || temp == '.')
                continue;
            answer += new_id[i];
            count++;
            temp = new_id[i];
        }
    }
    
    if (answer.length() >= 16)
        answer = answer.substr(0, 15);
    
    while (answer.back() == '.')
        answer.pop_back();
    
    if (answer.length() == 0)
        answer += "a";
    
    while (answer.length() <= 2)
        answer += answer.back();
                   
    return answer;
}

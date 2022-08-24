/*
Title   : 오픈채팅방
Author  : Hoseok Lee
Date    : 2022/08/24
https://school.programmers.co.kr/learn/courses/30/lessons/42888
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> m;
    
    for (auto it : record) {
        vector<int> index;
        
        for (int i = 0; i < it.length(); i++)
            if (it[i] == ' ')
                index.push_back(i);
        
        string menu = it.substr(0, index[0]);
        if (menu == "Leave")
            continue;
        string id = it.substr(index[0] + 1, index[1] - index[0] - 1);
        string nickname = it.substr(index[1] + 1);
        m[id] = nickname;
    }
    
    for (auto it : record) {
        vector<int> index;
        
        for (int i = 0; i < it.length(); i++)
            if (it[i] == ' ')
                index.push_back(i);
        
        string menu = it.substr(0, index[0]);
        string id = it.substr(index[0] + 1, index[1] - index[0] - 1);
        string result = "";
        
        if (menu == "Enter")
            result = m[id] + "님이 들어왔습니다.";
        else if (menu == "Leave")
            result = m[id] + "님이 나갔습니다.";
        else
            continue;
        answer.push_back(result);
    }
    
    return answer;
}

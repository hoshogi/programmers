/*
Title   : 파일명 정렬
Author  : Hoseok Lee
Date    : 2022/09/19
https://school.programmers.co.kr/learn/courses/30/lessons/17686
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string transfer(string str) {
    string result = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            result += tolower(str[i]);
        else
            result += str[i];
    }
    return result;
}

bool compare(tuple<string, string, string, int> prev, tuple<string, string, string, int> next) {
    if (transfer(get<0>(prev)) == transfer(get<0>(next))) {
        if (stoi(get<1>(prev)) == stoi(get<1>(next)))
            return get<3>(prev) < get<3>(next);
        return stoi(get<1>(prev)) < stoi(get<1>(next));
    }
    return transfer(get<0>(prev)) < transfer(get<0>(next));
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<tuple<string, string, string, int>> v;
    
    for (int i = 0; i < files.size(); i++) {
        int numStart, tailStart = files[i].length();
        bool num = false;
        
        for (int j = 0; j < files[i].length(); j++) {
            if (!num && files[i][j] >= '0' && files[i][j] <= '9') {
                numStart = j;
                num = true;
            }
            else if (num && !(files[i][j] >= '0' && files[i][j] <= '9')) {
                tailStart = j;
                break;
            }
        }
        
        string head = files[i].substr(0, numStart);
        string number = files[i].substr(numStart, tailStart - numStart);
        string tail = files[i].substr(tailStart);
        v.push_back({head, number, tail, i});
        cout << head << ", " << stoi(number) << ", " << tail << ", " << endl;
    }
    
    sort(v.begin(), v.end(), compare);
    for (auto it : v)
        answer.push_back(get<0>(it) + get<1>(it) + get<2>(it));
    return answer;
}

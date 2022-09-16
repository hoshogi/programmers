/*
Title   : 캐시
Author  : Hoseok Lee
Date    : 2022/09/17
https://school.programmers.co.kr/learn/courses/30/lessons/17680
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toLower(string str) {
    string temp = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            temp += tolower(str[i]);
        else
            temp += str[i];
    }
    
    return temp;
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> v;
    
    for (int i = 0; i < cities.size(); i++) {
        string city = toLower(cities[i]);
        
        if (cacheSize == 0) {
            answer += 5;
            continue;
        }
        
        if (v.size() == 0) {
            v.push_back(city);
            answer += 5;
            continue;
        }
        
        auto index = find(v.begin(), v.end(), city);
    
        if (index == v.end()) {
            if (v.size() == cacheSize)
                v.erase(v.begin());
            v.push_back(city);
            answer += 5;
        }
        else {
            v.erase(index);
            v.push_back(city);
            answer++;
        }
    }
    
    return answer;
}

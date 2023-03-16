/*
Title   : 뉴스 클러스터링
Author  : Hoseok Lee
Date    : 2023/03/16
https://school.programmers.co.kr/learn/courses/30/lessons/17677
https://github.com/hoshogi
*/

#include <string>
#include <map>

using namespace std;

void putIntoMap(map<string, int>& m, string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        string temp = "";
        
        for (int j = 0; j <= 1; j++) {
            if (str[i + j] >= 'a' && str[i + j] <= 'z')
                temp += str[i + j];
            if (str[i + j] >= 'A' && str[i + j] <= 'Z')
                temp += str[i + j] - 'A' + 'a';
        }
        if (temp.length() == 2)
            m[temp]++;
    }
}

int solution(string str1, string str2) {
    int same = 0, sum = 0;
    map<string, int> str1Map;
    map<string, int> str2Map;
    
    putIntoMap(str1Map, str1);
    putIntoMap(str2Map, str2);
    
    for (auto it : str1Map) 
        sum += it.second;
    for (auto it : str2Map)
        sum += it.second;
    
    for (auto it : str1Map) {
        if (str2Map.find(it.first) != str2Map.end()) {
            int temp = min(it.second, str2Map[it.first]);
            same += temp;
            sum -= temp;
        }
    }
    
    if (same == 0 && sum == 0)
        return 65536;
    return (int)((double)same / sum * 65536) ;
}
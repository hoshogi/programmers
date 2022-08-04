/*
Title   : 모음사전
Author  : Hoseok Lee
Date    : 2022/08/04
https://school.programmers.co.kr/learn/courses/30/lessons/84512
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

string check(int n) {
    switch (n) {
        case 0:
            return "";
        case 1:
            return "A";
        case 2:
            return "E";
        case 3:
            return "I";
        case 4:
            return "O";
        case 5:
            return "U";
    }
}

int solution(string word) {
    int answer;
    set<string> s;
    vector<string> v;
    
    for (int i = 0; i <= 5; i++)
        for (int j = 0; j <= 5; j++)
            for (int k = 0; k <= 5; k++)
                for (int l = 0; l <= 5; l++)
                    for (int m = 0; m <= 5; m++) {
                        string str = "";
                        
                        str += check(i);
                        str += check(j);
                        str += check(k);
                        str += check(l);
                        str += check(m);
                        
                        s.insert(str);
                    }
    
    for (auto it : s) {
        if (it == "")
            continue;
        v.push_back(it);
    }
    
    sort(v.begin(), v.end());
    answer = lower_bound(v.begin(), v.end(), word) - v.begin() + 1;
    return answer;
}

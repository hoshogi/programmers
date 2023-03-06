/*
Title   : 덧칠하기
Author  : Hoseok Lee
Date    : 2023/03/06
https://school.programmers.co.kr/learn/courses/30/lessons/161989
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    bool isNotPainted[100000] = {false, };
    
    for (int i = 0; i < section.size(); i++) 
        isNotPainted[section[i] - 1] = true;
    for (int i = 0; i < n; i++) {
        if (isNotPainted[i]) {
            answer++;
            i += m - 1;
        }
    }
    return answer;
}
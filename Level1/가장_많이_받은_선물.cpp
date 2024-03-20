/*
Title   : 가장 많이 받은 선물
Author  : Hoseok Lee
Date    : 2024/03/20

https://school.programmers.co.kr/learn/courses/30/lessons/258712
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int index = 0, answer = 0;
    map<string, int> friendIndex;
    int presentGraph[50][50] = {0, };
    int presentScore[50] = {0, };
    int presentCount[50] = {0, };

    for (auto it : friends) {
        friendIndex[it] = index++;
    }
    
    for (auto it : gifts) {
        string senderStr, receiverStr;
        int sender, receiver;
        
        stringstream ss(it);    
        ss >> senderStr >> receiverStr;
    
        sender = friendIndex[senderStr];
        receiver = friendIndex[receiverStr];
        
        presentGraph[sender][receiver]++;
        presentScore[sender]++;
        presentScore[receiver]--;
    }
    
    for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
            if (presentGraph[i][j] > presentGraph[j][i]) {
                presentCount[i]++;
                continue;
            }
            if (presentGraph[i][j] < presentGraph[j][i]) {
                presentCount[j]++;
                continue;
            }
            if (presentScore[i] > presentScore[j]) {
                presentCount[i]++;
                continue;
            }
            if (presentScore[i] < presentScore[j])
                presentCount[j]++;
        }
    }
    
    for (int i = 0; i < index; i++) {
        answer = max(answer, presentCount[i]);
    }
    return answer;
}
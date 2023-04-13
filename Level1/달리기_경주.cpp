/*
Title   : 달리기 경주
Author  : Hoseok Lee
Date    : 2023/04/13
https://school.programmers.co.kr/learn/courses/30/lessons/178871
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> playerIndex;
    
    for (int i = 0; i < players.size(); i++) 
        playerIndex[players[i]] = i;
    for (auto it : callings) {
        int index = playerIndex[it];
        playerIndex[it]--;
        playerIndex[players[index - 1]]++;
        swap(players[index], players[index - 1]);
    }
    return players;
}
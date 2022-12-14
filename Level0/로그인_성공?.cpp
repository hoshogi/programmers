/*
Title   : 로그인 성공?
Author  : Hoseok Lee
Date    : 2022/12/15
https://school.programmers.co.kr/learn/courses/30/lessons/120883
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string, string> user;
    
    for (auto it : db) 
        user[it[0]] = it[1];
    if (user.find(id_pw[0]) == user.end())
        return "fail";
    if (user[id_pw[0]] != id_pw[1])
        return "wrong pw";
    return "login";
}
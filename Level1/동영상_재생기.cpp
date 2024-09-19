/*
Title   : 동영상 재생기
Author  : Hoseok Lee
Date    : 2024/09/20

https://school.programmers.co.kr/learn/courses/30/lessons/340213
https://github.com/hoshogi
*/

#include <string>
#include <vector>

using namespace std;

int changeHour(string time);
int changeMin(string time);
string transferTime(int hour, int min);
string prev(string now, string opStart, string opEnd);
string next(string now, string videoLen, string opStart, string opEnd);

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    for (auto it : commands) {
        if (it == "prev") {
            pos = prev(pos, op_start, op_end);
            continue;
        }
        pos = next(pos, video_len, op_start, op_end);
    }
    return pos;
}

int changeHour(string time) {
    return stoi(time.substr(0, 2));
}

int changeMin(string time) {
    return stoi(time.substr(3, 2));
}

string transferTime(int hour, int min) {
    string time = "";
    
    if (hour < 10) {
        time += "0";
    }
    time += to_string(hour) + ":";
    if (min < 10) {
        time += "0";
    }
    return time + to_string(min);
}

string prev(string now, string opStart, string opEnd) {
    if (now >= opStart && now <= opEnd) {
        now = opEnd;
    }
    
    int hour = changeHour(now);
    int min = changeMin(now);
    
    min -= 10;
    if (min < 0) {
        hour--;
        min += 60;
    }
    if (hour < 0) {
        now = transferTime(0, 0);
    } else {
        now = transferTime(hour, min);
    }
    if (now >= opStart && now <= opEnd) {
        return opEnd;
    }
    return now;
}

string next(string now, string videoLen, string opStart, string opEnd) {
    if (now >= opStart && now <= opEnd) {
        now = opEnd;
    }
    
    int hour = changeHour(now);
    int min = changeMin(now);
    
    min += 10;
    if (min >= 60) {
        hour++;
        min -= 60;
    }
    now = transferTime(hour, min);
    if (now >= opStart && now <= opEnd) {
        return opEnd;
    }
    if (now > videoLen) {
        return videoLen;
    }
    return now;
}

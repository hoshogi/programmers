/*
Title   : 주차 요금 계산
Author  : Hoseok Lee
Date    : 2022/09/18
https://school.programmers.co.kr/learn/courses/30/lessons/92341
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int toTime(string in, string out) {
    int inHour = stoi(in.substr(0, 2));
    int inMin = stoi(in.substr(3, 2));
    int outHour = stoi(out.substr(0, 2));
    int outMin = stoi(out.substr(3, 2));
    return (outHour - inHour) * 60 + outMin - inMin;
}

int toPrice(int time, vector<int> fees) {
    int price = fees[1];
    
    if (time >= fees[0])
        price = fees[1] + ceil((double)(time - fees[0]) / fees[2]) * fees[3];
    return price;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,string> record;
    map<string, int> totalTime;
    
    for (auto it : records) {
        string time = it.substr(0, 5);
        string num = it.substr(6, 4);
        string state = it.substr(11);
        
        if (state == "IN")
            record[num] = time;
        else if (state == "OUT") {
            string in = record[num];
            record[num] = "null";
            int result = toTime(in, time);
            if (totalTime.find(num) == totalTime.end())
                totalTime[num] = result;
            else
                totalTime[num] += result;
        }
    }
    
    for (auto it : record) {
        if (it.second != "null") {
            int result = toTime(it.second, "23:59");
            if (totalTime.find(it.first) == totalTime.end())
                totalTime[it.first] = result;
            else
                totalTime[it.first] += result;
        }
    }
    
    for (auto it : totalTime)
        answer.push_back(toPrice(it.second, fees));
    
    return answer;
}

/*
Title   : 개인정보 수집 유효기간
Author  : Hoseok Lee
Date    : 2023/01/06
https://school.programmers.co.kr/learn/courses/30/lessons/150370
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

void calculate(int& year, int& month, int plus) {
    month += plus;
    if (month > 12) {
        if (month % 12 == 0) {
            year += month / 12 - 1;
            month -= (month / 12 - 1) * 12;
        }
        else {
            year += month / 12;
            month %= 12;
        }
    }
}

bool isExpired(int todayYear, int todayMonth, int todayDay, int year, int month, int day) {
    if (todayYear > year)
        return true;
    if (todayYear == year) {
        if (todayMonth > month)
            return true;
        if (todayMonth == month)
            if (todayDay >= day)
                return true;
    }
    return false;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<string, int> m;

    int todayYear = stoi(today.substr(0, 4));
    int todayMonth = stoi(today.substr(5, 2));
    int todayDay = stoi(today.substr(8, 2));

    for (auto it : terms) {
        string name = it.substr(0, 1);
        int num = stoi(it.substr(2));

        m[name] = num;
    }

    for (int i = 0; i < privacies.size(); i++) {
        string str = privacies[i];

        int year = stoi(str.substr(0, 4));
        int month = stoi(str.substr(5, 2));
        int day = stoi(str.substr(8, 2));
        string term = str.substr(11, 1);
        calculate(year, month, m[term]);

        if (isExpired(todayYear, todayMonth, todayDay, year, month, day))
            answer.push_back(i + 1);
    }

    return answer;
}
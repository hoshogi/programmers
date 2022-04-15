/*
Title   : 키패드 누르기
Author  : Hoseok Lee
Date    : 2022/04/15
https://programmers.co.kr/learn/courses/30/lessons/67256
https://github.com/hoshogi
*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    int leftRow = 3;
    int leftCol = 0;
    int rightRow = 3;
    int rightCol = 2;
    string answer = "";
    
    for (auto it : numbers) {
        switch (it) {
            case 1:
            case 4:
            case 7:
            answer += "L";
            leftRow = (it - 1) / 3;
            leftCol = (it - 1) % 3;
        }
        switch (it) {
            case 3:
            case 6:
            case 9:
                answer += "R";
                rightRow = (it - 1) / 3;
                rightCol = (it - 1) % 3;
        }
        switch (it) {
            case 2:
            case 5:
            case 8:
            case 0:
                if (it == 0)
                    it = 11;
                int nowRow = (it - 1) / 3;
                int nowCol = (it - 1) % 3;
                int leftDistance = abs(nowRow - leftRow) + abs(nowCol - leftCol);
                int rightDistance = abs(nowRow - rightRow) + abs(nowCol - rightCol);
                if (rightDistance < leftDistance) {
                    answer += "R";
                    rightRow = nowRow;
                    rightCol = nowCol;
                }
                else if (leftDistance < rightDistance) {
                    answer += "L";
                    leftRow = nowRow;
                    leftCol = nowCol;
                }
                else {
                    if (hand == "left") {
                        answer += "L";
                        leftRow = nowRow;
                        leftCol = nowCol;
                    } else if (hand == "right") {
                        answer += "R";
                        rightRow = nowRow;
                        rightCol = nowCol;
                    }
                }
        }
    }
    return answer;
}

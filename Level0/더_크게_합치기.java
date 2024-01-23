/*
Title   : 더 크게 합치기
Author  : Hoseok Lee
Date    : 2024/01/23
https://school.programmers.co.kr/learn/courses/30/lessons/181939
https://github.com/hoshogi
*/

class Solution {
    public int solution(int a, int b) {
        int first = Integer.parseInt(Integer.toString(a) + Integer.toString(b));
        int second = Integer.parseInt(Integer.toString(b) + Integer.toString(a));
        return first >= second ? first : second;
    }
}
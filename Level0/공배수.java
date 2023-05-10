/*
Title   : 공배수
Author  : Hoseok Lee
Date    : 2023/05/10
https://school.programmers.co.kr/learn/courses/30/lessons/181936
https://github.com/hoshogi
*/

class Solution {
    public int solution(int number, int n, int m) {
        return number % n == 0 && number % m == 0 ? 1 : 0;
    }
}
/*
Title   : flag에 따라 다른 값 반환하기
Author  : Hoseok Lee
Date    : 2023/05/10
https://school.programmers.co.kr/learn/courses/30/lessons/181941
https://github.com/hoshogi
*/

class Solution {
    public int solution(int a, int b, boolean flag) {
        return flag ? a + b : a - b;
    }
}
/*
Title   : 부분 문자열인지 확인하기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181843
https://github.com/hoshogi
*/

class Solution {
    public int solution(String my_string, String target) {
        return my_string.contains(target) ? 1 : 0;
    }
}
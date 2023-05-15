/*
Title   : 문자열의 뒤의 n글자
Author  : Hoseok Lee
Date    : 2023/05/15
https://school.programmers.co.kr/learn/courses/30/lessons/181910
https://github.com/hoshogi
*/

class Solution {
    public String solution(String my_string, int n) {
        return my_string.substring(my_string.length() - n);
    }
}
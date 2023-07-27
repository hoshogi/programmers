/*
Title   : 특정한 문자를 대문자로 바꾸기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181873
https://github.com/hoshogi
*/

class Solution {
    public String solution(String my_string, String alp) {
        return my_string.replaceAll(alp, alp.toUpperCase());
    }
}
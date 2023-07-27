/*
Title   : 원하는 문자열 찾기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181878
https://github.com/hoshogi
*/

class Solution {
    public int solution(String myString, String pat) {
        return myString.toLowerCase().contains(pat.toLowerCase()) ? 1 : 0;
    }
}
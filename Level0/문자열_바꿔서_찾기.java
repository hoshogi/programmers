/*
Title   : 문자열 바꿔서 찾기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181864
https://github.com/hoshogi
*/

class Solution {
    public int solution(String myString, String pat) {
        return myString.replaceAll("A", "a").replaceAll("B", "A").replaceAll("a", "B").contains(pat) ? 1 : 0;
    }
}
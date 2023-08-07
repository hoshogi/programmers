/*
Title   : A 강조하기
Author  : Hoseok Lee
Date    : 2023/08/07
https://school.programmers.co.kr/learn/courses/30/lessons/181874
https://github.com/hoshogi
*/

class Solution {
    public String solution(String myString) {
        return myString.toLowerCase().replaceAll("a", "A");
    }
}
/*
Title   : 문자 리스트를 문자열로 변환하기
Author  : Hoseok Lee
Date    : 2023/04/24
https://school.programmers.co.kr/learn/courses/30/lessons/181941
https://github.com/hoshogi
*/

class Solution {
    public String solution(String[] arr) {
        String answer = "";
        for (String str : arr)
            answer += str;
        return answer;
    }
}
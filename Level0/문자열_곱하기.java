/*
Title   : 문자열 곱하기
Author  : Hoseok Lee
Date    : 2023/04/22
https://school.programmers.co.kr/learn/courses/30/lessons/181940
https://github.com/hoshogi
*/

class Solution {
    public String solution(String my_string, int k) {
        String answer = "";
        
        for (int i = 0; i < k; i++)
            answer += my_string;
        return answer;
    }
}
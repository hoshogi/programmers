/*
Title   : 글자 이어 붙여 문자열 만들기
Author  : Hoseok Lee
Date    : 2023/07/18
https://school.programmers.co.kr/learn/courses/30/lessons/181915
https://github.com/hoshogi
*/

class Solution {
    public String solution(String my_string, int[] index_list) {
        String answer = "";
        
        for (int index : index_list) 
            answer += my_string.charAt(index);     
        return answer;
    }
}
/*
Title   : 꼬리 문자열
Author  : Hoseok Lee
Date    : 2023/08/02
https://school.programmers.co.kr/learn/courses/30/lessons/181841
https://github.com/hoshogi
*/

class Solution {
    public String solution(String[] str_list, String ex) {
        String answer = "";
        
        for (String str : str_list)
            answer += str.contains(ex) ? "" : str;
        return answer;
    }
}
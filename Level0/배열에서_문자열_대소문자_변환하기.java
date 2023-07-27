/*
Title   : 배열에서 문자열 대소문자 변환하기
Author  : Hoseok Lee
Date    : 2023/07/27
https://school.programmers.co.kr/learn/courses/30/lessons/181875
https://github.com/hoshogi
*/

class Solution {
    public String[] solution(String[] strArr) {
        for (int i = 0; i < strArr.length; i++) 
            strArr[i] = i % 2 == 0 ? strArr[i].toLowerCase() : strArr[i].toUpperCase();
        return strArr;
    }
}
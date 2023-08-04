/*
Title   : 조건에 맞게 수열 변환하기 1
Author  : Hoseok Lee
Date    : 2023/08/04
https://school.programmers.co.kr/learn/courses/30/lessons/181882
https://github.com/hoshogi
*/

class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[arr.length];
        
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                answer[i] = arr[i] / 2;
            } else if (arr[i] < 50 && arr[i] % 2 == 1) {
                answer[i] = arr[i] * 2;
            } else {
                answer[i] = arr[i];
            }
        }
        return answer;
    }
}
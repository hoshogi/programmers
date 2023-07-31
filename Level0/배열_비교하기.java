/*
Title   : 배열 비교하기
Author  : Hoseok Lee
Date    : 2023/07/31
https://school.programmers.co.kr/learn/courses/30/lessons/181856
https://github.com/hoshogi
*/

class Solution {
    public int solution(int[] arr1, int[] arr2) {
        if (arr1.length != arr2.length) 
            return arr1.length > arr2.length ? 1 : -1;
        
        int sum1 = 0, sum2 = 0;
        for (int num : arr1) 
            sum1 += num;
        for (int num : arr2)
            sum2 += num;
        if (sum1 != sum2) 
            return sum1 > sum2 ? 1 : -1;
        return 0;
    }
}
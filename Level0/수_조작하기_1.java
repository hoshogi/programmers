/*
Title   : 수 조작하기 1
Author  : Hoseok Lee
Date    : 2023/07/17
https://school.programmers.co.kr/learn/courses/30/lessons/181926
https://github.com/hoshogi
*/

class Solution {
    public int solution(int n, String control) {
        for (int i = 0; i < control.length(); i++) {
            switch (control.charAt(i)) {
                case 'w':
                    n++;
                    break;
                case 's':
                    n--;
                    break;
                case 'd':
                    n += 10;
                    break;
                case 'a':
                    n -= 10;
                    break;
            }
        }
        return n;
    }
}
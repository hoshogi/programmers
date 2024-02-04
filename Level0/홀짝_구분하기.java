/*
Title   : 홀짝 구분하기
Author  : Hoseok Lee
Date    : 2024/02/04
https://school.programmers.co.kr/learn/courses/30/lessons/181944
https://github.com/hoshogi
*/

import java.io.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int num = Integer.parseInt(br.readLine());
        bw.write(num + (num % 2 == 0 ? " is even" : " is odd"));
        bw.flush();
        bw.close();
    }
}
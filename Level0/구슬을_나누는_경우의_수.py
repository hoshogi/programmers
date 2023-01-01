'''
Title   : 구슬을 나누는 경우의 수
Author  : Hoseok Lee
Date    : 2023/01/01
https://school.programmers.co.kr/learn/courses/30/lessons/120840
https://github.com/hoshogi
'''

def solution(balls, share):
    answer = 0
    up = 1
    down = 1
    
    for i in range(share + 1, balls + 1):
        up *= i
    for i in range(1, balls - share + 1):
        down *= i
    return up / down
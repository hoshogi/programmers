"""
Title   : 두 정수 사이의 합
Author  : Hoseok Lee
Date    : 2022/05/12
https://programmers.co.kr/learn/courses/30/lessons/12912
https://github.com/hoshogi
"""

def solution(a, b):
    answer = ((a + b) / 2) * (abs(a - b) + 1)
    return answer
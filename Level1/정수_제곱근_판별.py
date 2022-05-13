"""
Title   : 정수 제곱근 판별
Author  : Hoseok Lee
Date    : 2022/05/13
https://programmers.co.kr/learn/courses/30/lessons/12934
https://github.com/hoshogi
"""

def solution(n):
    start = 1
    end = n
    while start <= end:
        mid = (start + end) // 2
        if n == mid * mid:
            return (mid + 1) * (mid + 1)
        elif n > mid * mid:
            start = mid + 1
        else:
            end = mid - 1
    return -1
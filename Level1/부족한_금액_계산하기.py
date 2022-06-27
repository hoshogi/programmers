"""
Title   : 부족한 금액 계산하기
Author  : Hoseok Lee
Date    : 2022/06/28
https://programmers.co.kr/learn/courses/30/lessons/82612
https://github.com/hoshogi
"""

def solution(price, money, count):
    sum = ((count * (count  + 1)) / 2) * price
    if sum > money:
        return sum - money
    else:
        return 0
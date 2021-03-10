# 1247 부호
"""
N개의 정수가 주어지면, 이 정수들의 합 S의 부호를 구하는 프로그램

총 3개의 테스트 셋이 주어진다.
첫째 줄에는 N이 주어지고, 둘째 줄부터 N개의 줄에 걸쳐 각 정수가 주어진다.
총 3개의 줄에 걸쳐 각 테스트 셋에 대한 N개의 정수들의 합 S의 부호를 출력한다.
S = 0 이면 "0"을, S > 0 이면 "+"를, S < 0 이면 "-"를 출력한다.
"""
import sys
num_list = [] # 숫자 리스트

for _ in range(3):
    n = int(sys.stdin.readline())
    for _ in range(n):
        num_list.append(int(sys.stdin.readline())) # 숫자 할당

    if sum(num_list) == 0: print("0")
    elif sum(num_list) < 0: print("-")
    elif sum(num_list) > 0: print("+")
    num_list = [] # 초기화
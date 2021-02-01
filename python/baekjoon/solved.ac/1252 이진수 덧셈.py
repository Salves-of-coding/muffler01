# 1252 이진수 덧셈
"""
두 개의 이진수를 입력받아 이를 더하는 프로그램을 작성하시오.

첫째 줄에 두 개의 이진수가 공백을 사이에 두고 주어진다.
각 이진수는 1 또는 0으로만 이루어져 있으며, 0으로 시작할 수도 있다.
이진수 덧셈 결과를 출력한다. 결과가 0인 경우를 제외하고는 출력되는 이진수는 항상 1로 시작해야 한다.
"""
a, b = map(str, input().split()) # 문자열로 받는 이유는 int()를 이용하기 위함이다.
a = int(a, 2) # 2진수로 재할당
b = int(b, 2)
c = a + b # 10진수 형태로 나온다.
print(bin(c)[2:]) # bin()로 2진수를 문자열로 바꾸어준뒤 [2:]로 앞의 0b를 제거

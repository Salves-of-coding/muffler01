# 1297 TV 크기
"""
TV의 크기는 TV의 대각선의 길이로 나타낸다.
대각선의 길이와 높이 너비의 비율이 주어질때, 높이와 너비의 길이를 출력하라.

첫째 줄에 대각선 길이, 높이 비율, 너비 비율이 공백 한 칸을 사이에 두고 주어진다.
너비 비율은 항상 높이 비율보다 크다.
높이와 너비를 공백 한 칸을 이용해서 구분지은 후 출력한다.
소수점이 나올 경우, 그 수보다 작으면서 가장 큰 정수로 출력한다. (내림)

52 9 16

"""
diagl, rate_x, rate_y = map(int, input().split())
k = (diagl**2 / (rate_x**2 + rate_y**2)) ** 0.5 # k는 비례상수로서 rate값마다 곱해주면 대각선 길이와 비율에 맞는 실제 길이를 구할 수 있다.
print(int(rate_x*k), int(rate_y*k))
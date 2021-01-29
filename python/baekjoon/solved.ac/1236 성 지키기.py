# 1236 성 지키기
"""
직사각형 모양의 성, 성의 1층은 몇 명의 경비원에 의해 보호
모든 행과 모든 열에 한 명 이상의 경비원이 있으면 좋겠다고 생각
성의 크기와 경비원이 어디있는지 주어졌을 때, 몇 명의 경비원을 최소로 추가해야 하는지 구하는 프로그램

첫째 줄에 성의 세로 크기 n, 가로 크기 m이 주어진다.
둘째 줄부터 n개의 줄에는 성의 상태가 주어진다.
. : 빈칸
x : 경비원이 있는 칸
"""

n, m = map(int, input().split())
castle = []
row = [0] * n
column = [0] * m
row_cnt = 0 # 행 기준, 필요한 경비원 수
column_cnt = 0 # 열 기준, 필요한 경비원 수

for _ in range(n):
    castle.append(input()) # 줄의 상태를 리스트형으로 저장

for i in range(n):
    for j in range(m):
        if castle[i][j] == 'X':
            row[i] = 1 # row[i]의 값을 1로 할당
            column[j] = 1 # column[j]의 값을 1로 할당

for x in row:
    if x == 0: # x가 0이라면, (즉, 해당 행에는 경비원이 없다.)
        row_cnt += 1

for y in column:
    if y == 0: # y가 0이라면, (즉, 해당 열에는 경비원이 없다.)
        column_cnt += 1

print(max(row_cnt, column_cnt)) # row_cnt와 column_cnt중 더 큰 값이 필요한 경비원의 수이다.


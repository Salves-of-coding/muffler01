# 2920 음계
"""
다장조 : c d e f g a b C, 총 8개 음
c = 1, d = 2, ... C = 8로 바꾼다.
1~8까지 차례대로 연주한다면 ascending, 반대는 descending,
둘 다 아니라면 mixed이다.
연주 순서가 주어질 때, asc, des, mix인지 판별하는 프로그램을 작성하시오.

첫째 줄에 8개의 숫자가 주어진다. (공백을 기준으로 나누어서)
ascending, descending, mixed 중 하나를 출력한다.
"""

nums = list(map(int, input().split())) # map()으로 변수 받기
asc = list(range(1,9)) # range(1,9)로 [1,2,3,4,5,6,7,8] 리스트 생성
des = asc[::-1] # [::-1]로 asc 리스트 reverse

if nums == asc:
    print("ascending")
elif nums == des:
    print("descending")
else:
    print("mixed")
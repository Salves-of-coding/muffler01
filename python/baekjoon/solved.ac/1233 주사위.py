# 1233 주사위
"""
총 3개의 주사위
s1 : 2 ~ 20
s2 : 2 ~ 20
s3 : 2 ~ 40
세 개의 주사위를 동시에 던졌을 때 가장 높은 빈도로 나오는 세 주사위의 합을 구한다.

첫째 줄에 정수 s1, s2, s3가 주어진다.
가장 높은 빈도로 나오는 세 주사위 합을 구하는 것이다.
단 답이 여러개라면 가장 합이 작은 것을 출력한다.
"""
s1, s2, s3 = map(int, input().split())
s1_list = list(range(1, s1 + 1)) # list 만들기
s2_list = list(range(1, s2 + 1))
s3_list = list(range(1, s3 + 1))
sum_list = [a+b+c for a in s1_list for b in s2_list for c in s3_list] # 합 list
cnt_list = [0]*81 # 최대합이 80이므로 81번 인덱스까지의 카운트 list
for i in sum_list: # 합 list 에서 합 값이 나올 때마다
    cnt_list[i] += 1 # 카운트 list에 1씩 추가
print(cnt_list.index(max(cnt_list))) # 카운트 최대값의 인덱스에 해당하는 값을 출력
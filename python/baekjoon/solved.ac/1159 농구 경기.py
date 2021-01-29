# 1159 농구 경기
"""
첫 글자가 같은 선수 5명을 선발하려고 한다.
만약, 성의 첫 글자가 같은 선수가 5명보다 적다면, 기권
내일 경기를 위해 뽑을 수 있는 성의 첫 글자를 모두 구해보려고 한다.

첫째 줄에 선수의 수 n이 주어진다. 다음 n개의 줄에는 각 선수의 성이 주어진다.
선발 불가능이라면, PREDAJA를 출력
선발 가능이라면, 성의 첫 글자를 사전순으로 공백없이 모두 출력한다.
"""
from collections import Counter # Counter 모듈 호출

n = int(input()) # n입력 받음
check = [] # check : player의 성을 받는 리스트
result = [] # result : 동일한 성이 5명 이상인 성만 들어가는 리스트
cnt = 0 # cnt : 동일한 성이 5명 이상일 때마다 +1 (선발 가능 여부 판단)

for _ in range(n): # n만큼 반복
    name = input() # 이름을 입력받음
    check.append(name[0]) # 이름의 앞부분만 check 리스트에 담음

player_cnt = Counter(check) # Counter는 리스트의 요소와 해당 요소의 개수를 딕셔너리 형태로 저장해준다.

for i, j in player_cnt.items(): # player_cnt에 담긴 key와 value를 각각 i와 j에 할당
    if j >= 5: # j가 5 이상이라면,
        result.append(i) # result에 할당
        cnt += 1 # cnt를 1 늘려줌

result.sort() # 사전 순으로 출력해야 하기 때문에 sort()이용

if cnt == 0: # cnt가 0이라면, 선발 불가능 상태이므로,
    print("PREDAJA") # PREDAJA 출력
else: # cnt가 0이 아니라면, 선발 가능 상태이므로,
    for x in result: # result를 x에 할당하여,
        print(x, end='') # x를 출력. 이때, end를 이용하여 연결하여 출력할 수 있다.

# 11720 숫자의 합
"""
n을 list 형으로 받는다. 예를 들어 54321를 받으면 n은 ['5','4','3','2','1']로 할당된다.
for문을 이용해서 i에 list 값을 하나씩 대입해주면서 더해준다.
"""
count = int(input())
n = list(input())
sum = 0
for i in n:
    sum += int(i)
print(sum)
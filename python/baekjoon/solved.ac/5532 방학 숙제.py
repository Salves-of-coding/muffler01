# 5532 방학 숙제
"""
방학은 총 L일이다. 수학은 총 B페이지 국어는 A페이지를 풀어야 한다.
하루 최대량은 국어는 C페이지, 수학이 D페이지 풀 수 있다.
놀 수 있는 최대 날의 수를 구하시오.

한 줄에 하나씩 총 다섯 줄에 걸쳐 l,a,b,c,d가 주어진다.
항상 방학 숙제를 방학 기간내에 다 할 수 있는 경우만 주어진다.
놀 수 있는 날의 최댓값으 출력한다.
"""
l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
cnt = 0
while a > 0 or b > 0:
    cnt += 1
    a -= c
    b -= d

print(l - cnt)

# 1010 다리 놓기
"""
서쪽에는 n개의 사이트, 동쪽에는 m개의 사이트가 있다.
n개의 다리를 지으려고 한다. 다리끼리는 서로 겹쳐질 수 없다고 할 때,
다리를 지을 수 있는 경우의 수를 구하는 프로그램을 작성하시오.

첫째 줄에 t가 주어진다.
그 다음 줄부터 n과 m이 주어진다.
다리를 지을 수 있는 경우의 수를 출력한다.

조합을 이용하면 쉽다.
왜 조합을 이용하는 것일까?
1. 다리를 n개 놓아야 하는데 결국은 m의 지점 중에 n개를 뽑으면 다리를 짓는 조건은 알아서 맞춰질 것이다.
2. 즉, 다리가 어떻게 놓이는지를 고민하는 것이 아니라, 어떤 지점을 뽑을 것인지 고민해야 한다.
3. 따라서, m개의 지점 중 n개의 지점을 선정하는 mCn을 이용하면 경우의 수를 구할 수 있다.
"""
t = int(input())

def factorial(x): # 조합에 사용하기 위한 팩토리얼 함수 정의
    if x == 1 or x == 0: # x가 1 또는 0일 때는 1을 반환
        return 1
    else:
        return x * factorial(x-1) # x >= 2일 때는 함수 재호출

for _ in range(t):
    n, m = map(int, input().split())
    result = factorial(m) / (factorial(n) * factorial(m-n)) # 함수 호출
    print(int(result)) # int형 변환 후 출력
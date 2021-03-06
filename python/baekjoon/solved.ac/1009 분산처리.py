# 1009 분산처리
"""
컴퓨터 10대, 각 컴퓨터에는 1번부터 10번의 번호를 부여한다.
1번 데이터는 1번 컴퓨터, 2번 데이터는 2번 컴퓨터...
10번 데이터는 10번 컴퓨터, 11번 데이터는 1번 컴퓨터...
총 데이터의 개수는 항상 a^b의 형태로 주어진다.
마지막 데이터가 처리될 컴퓨터의 번호를 구하여라.

첫째 줄에 테스트 케이스 t가 주어지며, 다음 줄마다 각 테스트 케이스에 대한 a와 b가 주어진다.
각 테스트 케이스에 대해 마지막 데이터가 처리되는 컴퓨터의 번호를 출력한다.
0 - 10
1 - 1
2 - 6 2 4 8
3 - 7 1 3 9
4 - 6 4
5 - 5
6 - 6
7 - 9 3 1 7
8 - 4 2 6 8
9 - 1 9
"""
# 시간 초과의 주의

t = int(input())

for _ in range(t):
    a, b = map(int, input().split())
    rest = a % 10 # 밑수의 일의 자리 숫자만 남김. 일의 자리 숫자에 따라 a^b의 일의 자리가 규칙성 있게 변한다.

    if rest == 0: # rest == 0, 즉 일의 자리가 0일때는 10으로 나누어 떨어지므로,
        print(10) # 10을 출력한다.
    elif rest == 1 or rest == 5 or rest == 6: # rest == 1, rest == 5, rest == 6 일때는, (or 다음에 rest == 를 선언해주자. or 5라고 쓰면 항상 작동할 것이다.)
        print(rest) # 1, 5, 6을 출력한다.
    elif rest == 4 or rest == 9: # rest == 4, rest = 9 일때는,
        if b % 2 == 0: # 지수가 짝수인 경우
            print(rest**2 % 10) # rest^2 % 10를 출력한다.
        else: # 지수가 홀수인 경우
            print(rest) # 4, 9를 출력한다.
    else: # rest가 각각 2,3,7,8일 때,
        if b % 4 == 0: # 지수가 4로 나누어 떨어질때,
            print(rest**4 % 10)
        else: # 지수가 4로 나누어 떨어지지 않을때,
            print((rest**(b % 4)) % 10)
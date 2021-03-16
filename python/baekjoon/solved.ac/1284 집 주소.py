# 1284 집 주소
"""
1. 각 숫자 사이에는 1cm의 여백
2. 1은 2cm의 너비를 차지, 0은 4cm의 너비를 차지, 나머지는 3cm
3. 호수판의 경계와 숫자 사이에는 1cm의 여백
호수판의 너비를 구하는 프로그램

입력 0이 들어올때까지 줄 단위로 주어진다.
0은 처리하지 않는다.
너비를 차지하는 만큼을 정수로 출력한다
각 출력은 줄바꿈으로 구분
"""
while 1: # 항상 작동
    n = input() # 입력 받기 및 초기화
    if n == '0': # 만약 0이라면
        break # 탈출
    result = len(n) + 1 # 문자 길이 + 1 = 문자 사이 사이 공백 개수
    for i in n: # 문자 길이
        if i == '0':
            result += 4
        elif i == '1':
            result += 2
        else:
            result += 3
    print(result) # 출력
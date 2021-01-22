# 2675 문자열 반복
"""
문자열 s를 입력받은 후에, 각 문자를 r번 반복해 새 문자열 p를 만들고 출력
QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

첫째 줄에 테스트 케이스의 개수가 주어진다.
둘째 줄에 테스트 케이스의 개수만큼의 케이스가 나오며
반복 횟수와 문자열이 공백으로 구분되어 주어진다.
이후 새로운 문자열이 출력된다.

접근법
- for문을 사용한다.
    1. map()을 이용하여 r과 s를 하나의 리스트로 만든다.
    2. r은 r_s[0]으로 반복횟수로 나누고, s는 r_s[1]로 나눈다.
    3. 이후 s는 다시 리스트형으로 만든다.
    - for문을 사용한다.
        4. 이중 반복문을 형성하여 list_s에서 원소 하나씩을 가져와 int(r)과 곱한다.
        5. 결과값에 이를 더한다.
    6. 다시 결과값을 빈 문자열로 초기화한다.

숙지가 필요한 항목
1. list_s = list(r_s[1]) 처럼 리스트형으로 나눌때 리스트의 인덱스 값을 넣을 수 있다.
2. input().split()을 이용하여 공백 기준으로 원소를 나누어 넣을 수 있다.
3. 초기화 작업은 맨 앞 그리고 반복문을 돌릴때마다 해두어야 정상 작동이 된다.
"""
t = int(input())
result = ''
for _ in range(t):
    r_s = list(map(str, input().split()))
    r = r_s[0]
    list_s = list(r_s[1])
    for i in list_s:
        result += int(r) * i
    print(result)
    result = ''
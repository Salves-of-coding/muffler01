# 2475 검증수
"""
6자리의 고유번호.
고유번호의 처음 5자리에는 00000~99999까지의 수 중 하나가 주어진다.
6번째 자리에는 검증수가 들어간다.
검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를 각각 제곱한 수의 합을
10으로 나눈 나머지이다.
ex) 04256 -> 0+16+4+25+36 = 81 -> / 10 -> 1

첫째 줄에 고유번호 5개가 공백을 기준으로 나누어 주어진다.
검증수를 출력한다.
"""
nums = list(map(int, input().split()))
sum = 0

for i in nums:
    sum += i**2

verf_num = sum % 10
print(verf_num)
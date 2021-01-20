# 2908 상수
"""
숫자를 거꾸로 말한다.
734 893 -> 437, 398
따라서 큰 수는 437이라고 말함

첫째 줄에 두 수 A,B가 주어진다.
두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.
상수의 대답을 출력한다.

접근법
- for
    1. 반복문을 이용하여 문자열의 순서를 바꾼다.
- if
    2. 두 숫자를 비교하여 더 큰 쪽을 출력한다.

숙지가 필요한 항목
1. 반복문을 이용한 문자열 순서 바꾸기
2. 더 요약할 수 있는지 확인하기
"""

a, b = input().split()
rev_a = ''
rev_b = ''
for i in a:
    rev_a = i + rev_a
for j in b:
    rev_b = j + rev_b
if int(rev_a) < int(rev_b):
    print(rev_b)
else:
    print(rev_a)
    
# 2908 상수 - 2
"""
접근법
1. join(), reversed()함수를 이용하여 문자열을 거꾸로 바꾼다.
- if
    2. 바꿔진 항목끼리 비교하여 더 큰 쪽을 출력한다.
"""
a, b = input().split()
if ''.join(reversed(a)) < ''.join(reversed(b)):
    print(''.join(reversed(b)))
else:
    print(''.join(reversed(a)))
    

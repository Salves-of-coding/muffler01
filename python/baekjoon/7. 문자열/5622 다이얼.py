# 5622 다이얼
"""
숫자 1을 걸려면 총 2초가 필요하다
1보다 1씩 커질수록 1초씩 더 걸린다.
어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면된다.
예를 들어, UNUCIC는 868242와 같다.

첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다.
이를 걸기 위해서 필요한 최소 시간을 출력한다.

접근법
1. 아스키코드를 이용한다.
2. 문자를 리스트형으로 바꾸어 준다.
- for
    - if
        3. 아스키코드에 적합한 알파벳이 나올때 걸리는 시간을 더해준다.
4. 총 시간을 출력한다.

숙지가 필요한 항목
1. 아스키코드 사용
2. 코드를 줄일 방법 찾기

"""

word = input().lower()
list_w = list(word)
time = 0

for i in list_w:
    if 97 <= ord(i) <= 99:
        time += 3
    elif 100 <= ord(i) <= 102:
        time += 4
    elif 103 <= ord(i) <= 105:
        time += 5
    elif 106 <= ord(i) <= 108:
        time += 6
    elif 109 <= ord(i) <= 111:
        time += 7
    elif 112 <= ord(i) <= 115:
        time += 8
    elif 116 <= ord(i) <= 118:
        time += 9
    elif 119 <= ord(i) <= 122:
        time += 10
print(time)

# 5622 다이얼 - 2
"""
접근법
1. alphabet을 리스트형으로 묶어 인덱스 번호를 이용한다. (인덱스 번호에 3을 더하면 time이기 때문이다.)
- for
    - for
        2. word[i] in j : word의 i번째 인덱스에 해당되는 알파벳이 j 안에 있다면 j의 인덱스 값에 3을 더한 값을 time에 더한다.
3. time을 출력한다.
"""
word = input()
alphabet = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
time = 0

for i in range(len(word)):
    for j in alphabet:
        if word[i] in j:
            time += alphabet.index(j) + 3

print(time)

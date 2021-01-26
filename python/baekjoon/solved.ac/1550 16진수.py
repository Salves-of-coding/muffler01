# 1550 16진수
"""
16진수 수를 입력받아서 10진수 수로 출력하라

첫째 줄에 16진수 수가 주어진다.
10진수 수로 변환해 출력한다.
"""
num_x = list(input())
alphabet = {'A':10,'B':11,'C':12,'D':13,'E':14,'F':15}
index = 0
result = 0
for i in num_x:
    if i in alphabet.keys():
        result += alphabet[i]*(16**(len(num_x)-1-index))
    else:
        result += int(i)*(16**(len(num_x)-1-index))
    index += 1
print(result)
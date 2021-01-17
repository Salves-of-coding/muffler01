# 4673 셀프 넘버
"""
셀프 넘버의 개념
양의 정수 n에 대해서 d(n)을 n과 n의 각 자리를 더하는 함수라고 정의하자.
예를 들어, d(75) = 75 + 7 + 5 = 87이다.
이때 n을 d(n)의  생성자라고 한다.
생성자가 없는 숫자를 셀프 넘버라고 한다.

접근
d_n 함수를 정의하고, d_n으로 만들어지지 않는 숫자가 셀프 넘버이다.
예를 들어, 100까지의 범위에서 53은 셀프 넘버인데 이는 d_n 함수로 만들어 지지 않는 숫자다.
1. d_n 함수의 정의
2. d_n 함수로 만들어진 숫자 리스트 형성 = list_a
3. 1 ~ 10000까지의 숫자 리스트 형성 = list_b
4. if문을 이용하여 list_a에 포함되지 않는다면 list_b에서 추출하여 result에 추가한다.
5. result에서 .pop()을 이용하여 하나씩 추출한다.

숙지가 필요한 항목
1. def으로 함수 정의
2. for-if문으로 list에 동일한 값이 있는지 확인하는 로직
3. 굳이 sorted()로 정렬할 필요 없음
"""


def d_n(n):
    thou = n//1000
    hund = (n%1000)//100
    ten = (n%100)//10
    one = n%10
    total = n + thou + hund + ten + one
    return total

list_a = []
for i in range(10000):
    list_a.append(d_n(i))

list_b = []
for i in range(10000):
    list_b.append(i)

result = []
for i in list_b:
    if i not in list_a:
        result.append(i)

for __ in range(len(result)):
    x = result.pop(0)
    print(x)
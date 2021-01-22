# 1065 한수
"""
한수의 본질
한 자리 숫자는 모두 한수이다.
두 자리 숫자들은 어차피 2자리 간의 차이만큼의 공차이기 때문에 모두 한수이다.
세 자리 숫자들의 경우 3개의 숫자의 공차가 일정해야하기 때문에 규칙이 필요하다.

세 자리 숫자 규칙 : 공차가 일정해야 한다.
즉, (백의 자리 - 십의 자리 = 십의 자리 - 일의 자리)가 성립해야 한다.
"""

n = int(input())
count = 0

for i in range(1, n+1):
    if i < 100:
        count += 1
    else:
        n_list = list(map(int,str(i)))
        if n_list[0] - n_list[1] == n_list[1] - n_list[2]:
            count += 1
print(count)
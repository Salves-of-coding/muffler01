# 2845 파티가 끝나고 난 뒤
"""
첫째 줄에 1m^2당 사람의 수 l, 파티가 열렸던 곳의 넓이 p가 주어진다.
둘째 줄에는 각 기사에 실려있는 참가자의 수가 주어진다. (5개)
첫째 줄에 다섯 개의 숫자를 출력한다. 이 숫자는 각 기사에 적혀있는 참가자와 실제 참가자의 차이이다.
"""
l, p = map(int, input().split())
nums = list(map(int, input().split()))
result = []

for i in range(5):
    result.append(nums[i] - (l*p))
    print(result[i], end=' ') # result[i] 값을 공백으로 나누어 출력
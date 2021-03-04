# 1225 이상한 곱셈
"""
A에서 한 자리를 뽑고 *B에서 임의로 한 자리를 뽑아 곱한다.
의 가능한 모든 조합 (A가 n자리, B가 m자리 수라면 가능한 조합 n*m개)을 더한 수로 정의
121*34는
1*3 + 1*4 + 2*3 + 2*4 + 1*3 + 1*4 = 28 이 된다.

첫째 줄에 A와 B가 주어진다.
첫째 줄에 새로 정의된 곱셈 결과를 출력한다.
"""
a,b = map(list, input().split()) # list로 정의
a_list = list(map(int, a)) # int형으로 변환
b_list = list(map(int, b))
print(sum(a_list)*sum(b_list))
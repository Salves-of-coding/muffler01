# 1271 엄청난 부자2
"""
돈을 똑같이 분배하자.
동일하게 분배 후 남는 돈

첫째 줄에 가진 돈 n과 돈을 받으러 온 생명체의 수 m이 주어진다.
생명체 하나당 돌아가는 돈의 양과 1원씩 분배할 수 없는 남는 돈을 출력
"""

n,m = map(int, input().split())
print(n//m,n%m, sep='\n')
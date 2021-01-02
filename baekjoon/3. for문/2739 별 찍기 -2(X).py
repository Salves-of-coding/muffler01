N = int(input())

for i in range(N):
    print(" "*(N-i-1)+"*"*(i+1))

# N-i-1을 해야 마지막에 공백이 없어진다.
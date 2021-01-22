N = int(input())
StopPoint = N
cycle = 0
ten = 0
one = 0
new_N = 0
while True:
    ten = N//10
    one = N%10
    total = ten + one
    new_N = one*10 + total%10
    cycle += 1
    N = new_N
    if new_N == StopPoint:
        break
print(cycle)
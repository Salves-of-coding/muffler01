value = int(input())

for i in range(value):
    a,b = input().split()
    ans = int(a)+int(b)
    print("Case #%s: %s + %s = %s"%(i+1, int(a), int(b), ans))
def d_n(n):
    thou = n//1000
    hund = (n%1000)//100
    ten = (n%100)//10
    one = n%10
    total = n + thou + hund + ten + one
    return total

d_n_list = []
for i in range(10000):
    d_n_list.append(d_n(i))
list_a = sorted(d_n_list)

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
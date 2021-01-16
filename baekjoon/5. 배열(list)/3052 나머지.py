values = []
for i in range(10):
    a = int(input())
    value = a % 42
    values.append(value)
    result = set(values)
print(len(result))
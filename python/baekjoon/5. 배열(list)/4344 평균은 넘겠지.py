c = int(input())
for _ in range(c):
    scores = list(map(int, input().split()))
    average = sum(scores[1:])/scores[0]
    up_people = 0
    for score in scores[1:]:
        if (score > average):
            up_people += 1
    rate = up_people / scores[0] * 100
    print(f'{rate:.3f}%')
t = int(input())
ox_list = []

for __ in range(t):
    ox_list = list(str(input()))
    score = 0
    plus = 1
    for i in range(len(ox_list)):
        if (ox_list[i] == 'O'):
            score += plus
            plus += 1
        else:
            plus = 1
    print(score)
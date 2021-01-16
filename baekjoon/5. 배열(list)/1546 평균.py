n = int(input())
scores = [int(x) for x in input().split()]
fix_scores = []

for i in range(n):
    fix_score = scores[i] / max(scores) * 100
    fix_scores.append(fix_score)
    fix_average = sum(fix_scores) / n

print(float(fix_average))
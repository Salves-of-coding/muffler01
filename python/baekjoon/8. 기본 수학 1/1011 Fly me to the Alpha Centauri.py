# 1011 Fly me to the Alpha Centauri
"""
k_n = k_n-1 - 1 or k_n-1 or k_n-1 + 1
단, k_1 = 1, k_마지막 공간이동 = 1로 고정한다.

첫째 줄에 t가 주어진다. 각 t마다 현재 위치 x와 목표 위치 y가 정수로 주어지며,
x는 항상 y보다 작은 값을 갖는다.
각 t마다 x지점에서 y지점까지 정확히 도달하는데 필요한
최소한의 공간이동 장치 작동 횟수를 출력한다.

접근법
- for
    1. x, y를 받아준다.
    2. distance = y - x 로 총 이동거리이다.
    3. cnt = 0은 구하고자 하는 이동 횟수이다.
    4. move = 1은 이동 횟수를 나타내는 숫자의 빈도수이다.
    5. move_sum = 0은 이동 횟루를 나타내는 숫자의 빈도수의 총합으로, cnt에 따라 이동 가능한 최대 거리이다.
    - while
        6. move_sum < distance 로 이동 거리가 최대 이동 거리보다 클때까지 계산한다.
        7. cnt += 1로 cnt를 증가시켜준다.
        8. move_sum += move로 총합을 늘려준다.
        - if
            9. cnt의 규칙성에 따라 추가 조건을 부여해준다.
            10. 여기에서는 2의 배수일 때마다 move가 1씩 증가한다.
            (예를 들어, distance = 5라면,
            0 < 5: cnt = 0 -> 1, move = 1 -> 1, move_sum = 0 -> 1
            1 < 5: cnt = 1 -> 2, move = 1 -> 2, move_sum = 1 -> 2
            2 < 5: cnt = 2 -> 3, move = 2 -> 2, move_sum = 2 -> 4
            4 < 5: cnt = 3 -> 4, move = 2 -> 3, move_sum = 4 -> 6
            end
            cnt = 4)

숙지가 필요한 항목
1. 논리구조 파악 및 설계
2. 계속 리뷰

"""
t = int(input())

for _ in range(t):
    x, y = map(int, input().split())
    distance = y - x
    cnt = 0
    move = 1
    move_sum = 0
    while move_sum < distance:
        cnt += 1
        move_sum += move
        if cnt % 2 == 0:
            move += 1
    print(cnt)
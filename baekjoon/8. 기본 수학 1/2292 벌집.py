# 2292 벌집
"""
중앙방 : 1
이웃하는 방을 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다.
1번방에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는가?

첫째 줄에 N이 주어진다.
지나간 방의 최소 개수를 출력한다.

접근법
1번 껍질 : 1개 방
2번 껍질 : 7개 방
3번 껍질 : 19개 방
...
껍질의 개수를 shell, 방의 개수를 room_num 이라고 한다면
room_num = 3 * shell * (shell - 1) + 1 이다. (수열)

1. shell = 1, room_num = 0으로 정의한다.
- if
    2. n = 1의 경우, 1을 출력한다.
- else
    3. n > 1의 경우,
    - while
        4. True로 계속 반복시켜준다.
        5. room_num과 shell의 관계식을 쓰고, 계산 후에 shell += 1로 껍질 수를 늘려준다.
        - if
            6. n <= room_num인 경우, shell -= 1을 해준다. (껍질 개수가 1개 더 늘어난 것을 줄이기 위해서)
            7. break로 빠져나오고 shell을 출력한다.

숙지가 필요한 항목
1. 관계식 세우기
2. while True: 이용하여 무한 반복 시키기
3. break를 활용하여 특정 조건 충족시 빠져나오기
4. 디버그 작업
"""
n = int(input())
shell = 1
room_num = 0
if n == 1:
    print(1)
else:
    while True:
        room_num = 3 * shell * (shell-1) + 1
        shell += 1
        if n <= room_num:
            shell -=1
            break
    print(shell)
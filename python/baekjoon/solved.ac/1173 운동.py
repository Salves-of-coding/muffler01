# 1173 운동
"""
운동과 휴식 중 1택 (1분마다)
운동 선택 시, 맥박이 T만큼 증가, 맥박이 X였다면, 1분 동안 운동을 한 후
맥박이 X+T가 된다. 또한, 맥박 X+T가 M 밑일 때만 운동을 할 수 있다.
휴식 선택 시, 맥박이 R만큼 감소, 맥박이 X였다면, 1분 동안 휴식을 한 후
맥박이 X-R이 된다. 또한 맥박 X-R이 m보다 작으면 맥박은 m이 된다.
초기 맥박은 m이며, 운동을 N분 하려고 한다. 운동 N분 하는데 필요한 최솟값을 구하자.

첫째 줄에 다섯 정수 N,m,M,T,R이 주어진다.
첫째 줄에 운동을 N분 하는데 필요한 시간의 최솟값을 출력한다.
만약 운동을 N분 할 수 없다면 -1을 출력한다.
"""
import sys

N, m, M, T, R = map(int, sys.stdin.readline().split())
cnt_T = 0 # 운동 시 카운트
cnt = 0 # 최소 시간 카운트
now = m # 현재 맥박

if now > M or now + T > M: # 운동 할 수 없는 경우
    print(-1)
    sys.exit()

while cnt_T < N:
    if now + T <= M:
        now += T
        cnt_T += 1
        cnt += 1
        continue
    else:
        while now + T > M:
            now -= R
            if now < m: # 현재 맥박이 m보다 작은 경우, 맥박은 m이다.
                now = m
            cnt += 1
print(cnt)
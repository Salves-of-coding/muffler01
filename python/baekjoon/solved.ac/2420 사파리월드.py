# 2420 사파리 월드
"""
사파리 월드에는 2개의 서브 도메인인
seunghwan.royal.gov.sw와
kyuhyun.royal.gov.sw이 있다.
이것이 couple.royal.gov.sw로 합쳐질 것이다.
규칙은 유명도의 차이가 너무 차이나지 않을 경우에만 두 서브도메인을 합친다.
유명도는 정수이며, 두 유명도가 주어졌을때 그 차이를 구하는 프로그램을 작성하시오.

첫째 줄에 두 유명도 N과 M이 주어진다.
첫째 줄에 두 유명도의 차이(|N-M|)을 출력한다.
"""
n, m = map(int, input().split())

if n-m >= 0:
    print(n-m)
else:
    print(m-n)

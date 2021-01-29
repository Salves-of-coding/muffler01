# 1076 저항
"""
저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.
처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.

첫째 줄에 첫 번째 색, 둘째 줄에 두 번째 색, 셋째 줄에 세 번째 색이 주어진다.
처항의 저항값을 계산하여 첫째 줄에 출력한다.
"""
colors = {'black':0, 'brown':1, 'red':2, 'orange':3, 'yellow':4, 'green':5, 'blue':6, 'violet':7, 'grey':8, 'white':9} # 저항값 딕셔너리 생성
color1_num = colors[input()] # 저항 1 값
color2_num = colors[input()] # 저항 2 값
color3_num = 10 ** colors[input()] # 저항 3 값 (저항 3은 10의 거듭제곱으로 표현된다.)
result = int(str(color1_num) + str(color2_num)) * color3_num # 결과값

print(result) # 결과값 출력
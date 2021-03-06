# 2941 크로아티아 알파벳
"""
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=

첫째 줄에 알파벳 소문자와 '-', '='로만 이루어진 문자열이 주어진다.
이 문자열의 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력하라.

접근법
1. 기본 알파벳은 모두 포함한다. (a~z)
2. 크로아티아 알파벳에 해당하는 문자들을 리스트형으로 만든다.
- for
    3. 크로아티아 알파벳에 해당하는 문자들을 범위로 설정하고 반복문으로 반복한다.
    - if
        4. 만약 i가 word에 포함된다면, replace()함수를 통해 해당 문자를 '*'로 바꾸어준다.
5. 바꾸어진 word의 길이를 출력한다.

숙지가 필요한 항목
1. if i in word에서 word는 문자열이지만 in으로 찾아낼 수 있다.
2. replace(x,y)함수는 문자열에서 x를 찾아 y로 바꾸어주는 함수이다.

"""

word = input()
uniq_alp = ['c=','c-','dz=','d-','lj','nj','s=','z=']
for i in uniq_alp:
    if i in word:
        word = word.replace(i, '*')
print(len(word))
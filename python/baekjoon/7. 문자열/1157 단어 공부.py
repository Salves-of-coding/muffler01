# 1157 단어 공부
"""
알파벳 대소문자로 이루어진 단어가 주어진다. 이 단어에서 가장 많이 사용된 알파벳은 무엇인가?
(단, 대문자와 소문자를 구분하지 않는다.)

첫째 줄에 문자열이 주어진다.
가장 많이 사용된 알파벳을 대문자로 출력한다.
가장 많이 사용된 알파벳이 여러 개 존재할 경우 ?를 출력한다.

접근법
1. 세트를 이용하여 중복을 불허하는 리스트를 새로만든다.
- for
    2. count()를 이용하여 해당 문자에 ()가 몇개 있는지 파악하고 변수에 할당해준다.
    3. append()를 이용하여 count를 count_list에 추가해준다.
- if
    4. 중복이 있는 경우, ?를 출력해준다.
- else
    5. 중복이 없는 경우, 가장 많이 나온 문자를 출력한다.

숙지가 필요한 항목
1. 세트를 이용한 중복 불허 리스트 형성
2. count()함수를 이용한 문자의 개수 반환
3. if-else문을 이용하여 중복이 된 경우와 중복이 되지 않은 경우를 나누어준다.
4. 특히, if문에서는 'count_list.count(max(count_list)) > 1'을 이해할 필요가 있다.
    이는 max(count_list)가 숫자로 반환되고 이를 count()가 세어준다.
    이 숫자가 1을 넘으면 max(count_list)가 2개 이상이 되는 것이므로
    중복이 존재한다는 것이다.
5. 또한, else문에서는 'max_index = count_list.index(max(count_list))'를 이해할 필요가 있다.
    이는 max(count_list)가 숫자로 반환되고 그 숫자에 해당하는 인덱스 값을
    max_index에 할당한다. 이후 반대로 new_word에서 max_index에 해당하는
    문자를 출력하는 것이다.
6. 전체적으로 max()와 index()를 활용하는 문제이다.

"""

word = str(input().upper())
new_word = list(set(word))
count_list = []

for i in new_word:
    count = word.count(i)
    count_list.append(count)

if count_list.count(max(count_list)) > 1:
    print("?")
else:
    max_index = count_list.index(max(count_list))
    print(new_word[max_index])
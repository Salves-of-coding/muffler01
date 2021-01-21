# Chapter 7. 자료구조

## 자료구조의 이해
- 자료구조(data structure) : 데이터의 특징을 고려하여 데이터를 저장하는 방법
- 파이썬에서의 자료구조

|자료구조명|특징|
|:---:|:---:|
|스택(stack)|LIFO(Last In First Out)|
|큐(queue)|FIFO(First In First Out)|
|튜플(tuple|리스트와 같지만 데이터의 변경을 허용하지 않는 자료구조|
|세트(set)|데이터의 중복을 허용하지 않고, 수학의 집합 연산을 지원하는 자료구조|
|딕셔너리(dictionary)|key와 value형태의 데이터를 저장하는 자료구조|
|collections 모듈|자료구조를 효율적으로 사용할 수 있도록 지원하는 파이썬 내장 모듈|
  
## 스택과 큐
- 스택(stack) : LIFO, 마지막에 들어간 데이터가 가장 먼저 나오는 자료형
  - push : 데이터를 저장하는 것
  - pop : 데이터를 추출하는 것
  - append() : () 값을 마지막 index에 저장
  - pop() : () index의 값을 추출
- 큐(queue) : FIFO, 먼저 들어간 데이터가 가장 먼저 나오는 자료형
  - pop(0) : 0번째 값을 추출
  
## 튜플과 세트
- 튜플(tuple) : 리스트와 같지만, 값을 변경하는 것이 불가능한 자료형
  ```python
  t = (1,2,3)
  print(t+t, t*2)
  (1,2,3,1,2,3) (1,2,3,1,2,3)
  len(t)
  3
  ```
  - ()로 선언
  - 기본적인 사칙연산, 인덱싱, 슬라이싱 사용 가능
  ```python
  t[1] = 5
  Traceback (most recent call last):
    File "<stdin>", line 1, in <module>
  TypeError: 'tuple' object does not support item assignment
  # 새로운 요소 할당을 지원하지 않는다.
  ```
  - 튜플의 요소가 1개일 때, t = (1, )와 같이 선언해야 한다.
- 세트(set) : 값을 순서 없이 저장하면서, 중복을 불허하는 자료형
  ```python
  s = set([1,2,3,1,2,3]) # set() 함수를 사용하여 리스트나 튜플을 () 안에 넣는다.
  s
  {1,2,3}
  ```
  - 삭제와 변경이 가능하다.
  - add() : ()을 추가
  - remove() : ()을 삭제
  - update() : list를 추가
  - discard() : ()을 삭제
  - clear() : 모든 원소 삭제
  - x.union(y) : x와 y의 합집합 (= x | y)
  - x.intersection(y) : x와 y의 교집합 (= x & y)
  - x.difference(y) : x와 y의 차집함 (= x - y)
  
## 딕셔너리
- 딕셔너리(dictionary) : 키(key)와 값(value)을 쌍으로 저장하는 자료형
  - 대표적인 예시 : 학번, 이름 / 제품번호, 제품
- 딕셔너리 기본 문법
  ```python
  딕셔너리 변수 = {키1:값1, 키2:값2, 키3:값:, ...}
  ```
  - 선언과 호출
  ```python
  student_info = {123:'a', 456:'b', 789:'c'}
  student_info[123]
  
  'a'
  ```
  - 재할당과 데이터 추가
  ```python
  student_info[123] = 'd' # 재할당
  student_info[123] 
  'd'
  
  student_info[000] = 'e' # 데이터 추가
  student_info
  {123:'d', 456:'b', 789:'c', 000:'e'}
  ```
- 딕셔너리 함수
  - keys() : 딕셔너리 key만 출력
  - values() : 딕셔너리 value만 출력
  - items() : 딕셔너리의 모든 데이터 출력
  - for문과 활용
  ```python
  for k, v in dict.items():
    print("Key : ", k)
    print("Value : ", v)
  ```
  - in : 해당 key 값이나, value 값이 있는지 여부 확인 (True, False 형으로 반환)
  
## collections 모듈
- collections 모듈 : 파이썬의 내장 자료구조 모듈로서, 리스트, 튜플, 딕셔너리 등을 확장하여 제작
  - 자료구조의 호출
  ```python
  from collections import deque
  from collections import OrderedDict
  from collections import defaultdict
  from collections import Counter
  from collections import namedtuple
  ```
- deque 모듈
  - 스택과 큐를 모두 지원하는 모듈
  ```python
  from collections import deque # 모듈 호출
  
  deque_list = deque()
  for i in range(5):
    deque_list.append(i)
    
  print(deque_list)
  deque([0,1,2,3,4]) # 리스트 형태로 저장
  ```
  - pop()은 작동하지만, pop(0)은 작동하지 않는다.
  - appendleft() : 왼쪽부터 입력되게 하는 함수
  - rotate() : () 칸씩 오른쪽으로 미는 함수
  - reversed() : 기존 data를 반대로 저장하는 함수
  - extend() : 새로운 값을 붙이는 함수
  - extendleft() : 새로운 값을 왼쪽으로 붙이는 함수
  - deque 모듈의 장점
    - 연결 리스트(linked list)의 특성을 지원
    - 즉, 데이터를 원형으로 저장할 수 있음 (처음과 끝이 연결되도록)
- OrderedDict 모듈
  - 딕셔너리의 순서를 보장하지 않는 점을 보완한, 자료구조의 순서를 보장해주는 모듈
  - 딕셔너리 변수를 리스트로 추출하고, sorted()로 정렬한 후 OrderDict 모듈로 감싸주는 방식으로 사용
- defaultdict 모듈
  - 딕셔너리 변수를 생성할 때 키에 기본 값을 지정하는 모듈
- Counter 모듈
  - 데이터 값의 개수를 딕셔너리 형태로 반환하는 모듈
  ```python
  from collections import Counter
  
  text = list("abced")
  text
  ['a','b','c','d','e']
  c = Counter(text)
  c
  Counter({'a':1,'b':1,'c':1,'d':1,'e':1}
  c["a"]
  1
  ```
- namedtuple 모듈
  - 튜플의 형태로 데이터 구조체를 저장하는 모듈
  ```python
  from collections import namedtuple
  
  Point = namedtuple('Point',['x','y'])
  p = Point(11,22)
  p
  Point(x=11,y=22)
  p.x, p.y
  (11, 22)
  print(p[0]+p[1])
  33
  ```
- 더 자세한 내용은 '데이터 과학을 위한 파이썬 프로그래밍'을 참고

## 관련 문제
[스택](https://www.acmicpc.net/step/11) <br>
[큐, 덱](https://www.acmicpc.net/step/12) <br>
[우선순위 큐](https://www.acmicpc.net/step/13) <br>
[정렬](https://www.acmicpc.net/step/9) <br>

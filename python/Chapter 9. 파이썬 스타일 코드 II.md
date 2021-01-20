# Chapter 9. 파이썬 스타일 코드 II

## 람다 함수
- 람다(lambda) 함수 : ㅇ함수의 이름 없이, 함수처럼 사용할 수 있는 익명의 함수
  ```python
  f = lambda x, y: x + y
  print(f(1,4,))
  
  5
  ```
  - 이름을 지정하지 않아도 사용가능
  - def와 return 생략가능
  - 단, 변수를 1개로 정의하였는데 2개 이상의 변수가 들어오면 오류가 발생한다.
  
## 맵리듀스
- map() : 연속 데이터를 저장하는 시퀀스 자료형에서 요소마다 같은 기능을 적용하는 함수
  ```python
  ex = [1,2,3,4,5]
  f = lambda x: x**2
  print(list(map(f,ex)))
  
  [1,4,9,16,25]
  ```
  - map(자료형, input())의 형식으로도 쓴다.
  - 파이썬 2.x에서는 map()이 리스트로 반환하지만, 3.x에서는 list를 붙여줘야 리스트로 반환한다.
  - 반복문을 이용하면 이 각각의 요소를 추출할 수 있다.
  - 굳이 람다 함수나 map()을 사용하지 않아도 리스트 컴프리헨션으로 구현 가능한 부분이 많다.
  ```python
  ex = [1,2,3,4,5]
  [x ** 2 for x in ex]
  
  [1,4,9,16,25]
  ```
  - 또한, 2개 이상의 시퀀스 자료형을 처리하는 데에도 문제 없이 가능하다.
  - 뒤에 조건문을 추가해주면 필터링 기능도 포함시킬 수 있다.
- reduce() : 시퀀스 자료형에 차례대로 함수를 적용하여 모든 값을 통합하는 함수
  ```python
  from functools import reduce
  print(reduce(lambda x, y: x + y, [1,2,3,4,5]))
  
  15
  ```
  - 마치 합의 연산, 시그마처럼 사용할 수 있다.
  
## 별표의 활용
- 별표(asterisk) : 일반적으로 곱하기 기호를 뜻한다. 하지만 가변 인수를 사용할 때 변수명 앞에 사용하기도 한다.
  - 1개 : 가변 인수를 사용
  - 2개 : 키워드 가변 인수를 사용
- 별표의 언패킹 기능
  ```python
  def asterisk_test(a, args):
    print(a, *args)
    print(type(args))  
  asterisk_test(1,(2,3,4,5,6))
  
  1 2 3 4 5 6
  <class 'tuple'>
  ```
  - 별표를 이용하여 1 다음의 시퀀스 자료형을 언패킹하여 할당했다. 즉, 1 2 3 4 5 6 로 출력 되었다.
  - args의 자료형을 보면 튜플형이었으며, 이를 별표로 언패킹한 것이다.
  - 반대로 언패킹된 자료를 함수 정의 과정에서 변수 앞에 별표를 붙어주면 다시 패킹을 시킬 수 있다.
  - 이차원 리스트를 언패킹 할 경우 1차원 리스트로 분할된다.
  - 마찬가지로 2개의 별표를 사용할 경우도 패킹과 언패킹 기능을 지원한다. 하지만 이때에는 딕셔너리형의 자료형을 다룰 때 사용된다.
  
## 선형대수학
- 벡터와 행렬의 개념
  - 벡터(vector) : 프로래밍에서는 리스트와 비슷하게, 여러 개의 데이터를 하나의 정보에 표현하는 것
  - 행렬(matrix) : 1개 이상의 벡터 모임
    - m개의 행과 n개의 열로 구성. 
    - m x n 행렬이라고 표기하며 m by n이라고 읽는다.
    - 행렬 A의 i행, j열의 값을 A의 ij번째 값이라고 하고, a_ij이라고 표시한다.
- 파이썬 스타일 코드로 표현한 벡터
  ```python
  vector_a = [1,2,10]              # 리스트형
  vector_b = (1,2,10)              # 튜플형
  vector_c = {'x':1,'y':2,'z':10}  # 딕셔너리형
  ```
  - 벡터의 연산 : 같은 위치에 있는 요소끼리 연산, 크기가 같아야 한다.
  ```python
  u = [2,2]
  v = [2,3]
  z = [3,5]
  result = [sum(t) for t in zip(u,v,z)]
  print(result)
  
  [7,10]
  ```
  - 별표를 사용한 함수화
  ```python
  def vector_addition(*args):
    return [sum(t) for t in zip(*args)]
    
  vector_addition(u,v,z)
  
  [7,10]
  ```
  - 변수 선언 개수를 줄이기
  ```python
  row_vectors = [[2,2,],[2,3],[3,5]]
  vector_addition(*row_vectors)
  
  [7,10]
  ```
  - 스칼라-벡터 연산
  ```python
  u = [1,2,3]
  v = [4,4,4]
  alpha = 2
  result = [alpha * sum(t) for t in zip(u,v)]
  result
  
  [10,12,14]
  ```
- 파이썬 스타일 코드로 표현한 행렬
  ```python
  matrix_a = [[3,6],[4,5]]                         # 리스트형
  matrix_b = [(3,6),(4,5)]                         # 튜플형
  matrix_c = [(0,0):3, (0,1):6, (1,0):4, (1,1):5]  # 딕셔너리형
  ```
  - 행렬의 덧셈과 뺄셈
  ```python
  matrix_a = [[3,6],[4,5]]                        
  matrix_b = [[5,8],[6,7]]
  result = [[sum(row) for row in zip(*t)] for t in zip(matrix_a, matrix_b)]
  print(result)
  
  [[8,14],[10,12]]
  ```
  - 과정
    - 각 행렬의 같은 인덱스에 위치한 요소를 zip()을 이용하여 묶는다. 새로운 행렬의 값이 t에 할당된다.
    - 이후 t를 언패킹하여 다시 zip()을 이용하면 각 1차원리스트에 있는 값끼리 row에 할당되어 sum()을 이용하여 합한다.
    - 이후 합한 값들을 다시 새로운 행령에 할당하여 출력한다.
  - 행렬의 동치 : 같은 행렬인지 파악
    - any() : 하나라도 True일 경우 True 값을 반환하는 함수
    - all() : 모두 True일 경우 True 값을 반환하는 함수
  - 전치행렬 : 열과 행을 바꾸어 만든 행렬이며,  A^t라고 표현
  - 행렬의 곱셈 : 앞 행렬의 열과 뒤 행렬의 행의 크기가 같아야 한다.
  ```python
  matrix_a = [[1,1,2],[2,1,1]]
  matrix_b = [[1,1],[2,1],[1,3]]
  result = [[sum(a * b for a, b in zip(row_a, column_b)) for column_b in zip(*matrix_b)] for row_a in matrix_a]
  result
  
  [[5,8],[5,6]]
  ```
  
## 관련 문제
- 책 

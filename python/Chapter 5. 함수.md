# Chapter 5. 함수

## 함수 기초
- 함수의 개념
  - 함수(function) : 함수는 어떤 일을 수행하는 코드의 덩어리 또는 코드의 묶음
- 함수의 장점
  - 필요할 때마다 호출 가능
  - 논리적인 단위로 분할 가능
  - 코드의 캡슐화
- 함수의 선언
  ```python
  def 함수 이름 (매개변수 #1 ...):
    수행문 1
    수행문 2
    return <반환값>
  ```
  - def : definition의 줄임말로, 함수를 정의
  - 함수 이름 규칙
    - 소문자로 입력한다.
    - 띄어쓰기를 할 경우에는 _기호를 사용한다.
    - 행위를 기록하므로 동사와 명사를 함께 사용하는 경우가 많다.
    - 외부에 공개하는 함수일 경우  줄임말을 사용하지 않고 짧고 명료한 이름을 정한다.
  - 매개변수(parameter) : 함수에서 입력값으로 사용하는 변수
  - 수행문 : 반드시 들여쓰기한 후 코드를 입력할 것
- 함수 분석
  - 정의 : def ~ return
  - 호출 및 실행 : 함수 이름(매개변수 #1 ...)
- 매개변수와 인수
  ```python
  def f(x):
    return 2 * x + 7
    
  print(f(2))
  ```
  - x : 매개변수(parameter), 함수 사용에 있어 인터페이스를 정의할 때, 정의된 변수
  - 2 : 인수(argument), 매개변수에 실제로 대입되는 값
- 함수의 형태
  ||매개변수 없음|매개변수 있음|
  |:---:|:---:|:---:|
  |반환값 없음|함수 안 수행문만 수행|매개변수를 사용하여 수행문만 수행|
  |반환값 있음|매개변수 없이 수행문을 수행한 후, 결과값 반환|매개변수를 사용하여 수행문을 수행한 후, 결과값 반환|
  ```python
  def a_f():    # 매개변수 x, 반환값 x
    print(5*7)
  def b_f(x,y): # 매개변수 o, 반환값 x
    print(x*y)
  def c_f():    # 매개변수 x, 반환값 o
    return(5*7)
  def d_f(x,y): # 매개변수 o, 반환값 o
    return(5*7)
  a_f()
  b_f(5,7)
  print(c_f())
  print(d_f(5,7))
  
  35
  35
  35
  35
  ```
  
## 함수 심화
- 함수의 호출 방식
  ```python
  def f(x):        # 함수 정의
    y = x
    x = 5
    return y * y
  
  x = 3            # 실행 코드 시작
  print(f(x))      # f(x) : y = x, y = 3 -> return y^2 = 9 
  print(x)         # x = 3 (def 안의 x와 밖의 x는 메모리 주소가 다르다.) 
  
  9
  3
  ```
- 변수의 사용 범위
  - 지역 변수(local variable) : 함수 안에서만 사용되는 변수
  - 전역 변수(global variable) : 프로그램 전체에서 사용되는 변수
  - global : 함수 안의 변수와 함수 밖의 변수를 같은 이름으로 사용하기 위해서 사용하는 키워드
- 재귀 함수 : 함수가 자기 자신을 다시 부르는 함수
  ```python
  def factorial(n):
    if n == 1:
      return 1
    else:
      return n * factorial(n-1)
  print(factorial(int(input("Input Number for Factorial Calculation: "))))
  
  Input Number for Factorial Calculation: 5
  120
  ```
  
## 함수와 인수
- 키원드 인수(keyword arguments) : 함수에 입력되는 매개변수의 변수명을 사용하여 함수의 인수를 지정하는 방법
  ```python
  def print_something(my_name, your_name):
    print("Hello {0}, My name is {1}".format(your_name, my_name))
  ```
- 디폴트 인수(default arguments) : 매개변수에 기본값을 지정하여 사용하고, 아무런 값도 인수로 넘기지 않으면 지정된 기본값을 사용하는 방법
- 가변 인수(variable-length arguments) : 마트 계산기에서 합산을 수행하는 연산에 사용되는 인수. 즉, 매개변수가 정해지지 않을 때 사용하는 방법
  ```python
  def asterisk_test(a,b,*args):
    return a + b + sum(args)
  print(asterisk_test(1,2,3,4,5))
  
  15
  ```
  - '*' : 변수를 묶어 주는 가변 인수를 만들기 위해서 사용 (tuple형)
- 키워드 가변 인수(keyword variable-length arguments) : 가변 인수의 변수 이름을 지정할 수 없는 단점을 보완할 때 사용하는 방법
  ```python
  def kwargs_test(**kwargs):
    print(kwargs)
    print("First value is {first}".format(**kwargs))
    print("Second value is {secpnd}".format(**kwargs))
    print("Third value is {third}".format(**kwargs))  
  kwargs_test(fisrt = 3, second = 4, third = 5)
  
  {'first':3,'second':4,'third':5}
  First value is 3
  Second value is 4
  Third value is 5
  ```
  - ****** : 키워드 가변 인수를 만들기 위해서 사용 (dictionary형)

## 관련 문제
[함수](https://www.acmicpc.net/step/5)<br>
[재귀](https://www.acmicpc.net/step/19)<br>
[기본 수학 1](https://www.acmicpc.net/step/8)<br>
[기본 수학 2](https://www.acmicpc.net/step/10)<br>

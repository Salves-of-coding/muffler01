# Chapter 10. 객체 지향 프로그래밍

## 객체 지향 프로그래밍의 이해
- 객체 지향 프로그래밍(object oriented programming, OOP)
- 객체 지향 프로그래밍을 배우는 이유
  - 남이 만든 코드를 재사용하고 싶을 때 사용하는 대표적인 방법이다.
  - 함수처럼 어떤 기능을 함수 코드에 묶어 두는 것이 아니라, 그런 기능을 하는 프로그램을 객체라고 하는 코드에 넣어 다른 프로그래머가 재상용할 수 있도록 하는 프로그래밍 기법
  - 객체 지향 프로그래밍만 다루는 책이 나올 정도로 방대하다.
- 객체(object) : 실생활에 존재하는 실제적인 물건 또는 개념, 속성(attribute)과 행동(action)으로 구성
  - 프로그래밍에서 속성은 변수로 행동은 함수로 정의된다.
- 클래스(class) : 객체가 가져야 할 기본 정보를 담은 코드, 일종의 설계도 코드
  - 인스턴스(instance) : 실제로 생성되는 객체
  
## 파이썬의 객체 지향 프로그래밍
- 클래스 기본 문법
  ```python
  class <클래스 이름>(상속받는 객체명):
  ```
  - 클래스 작명 기법 : CamelCase, 띄어쓰기 부분에 대문자를 사용하여 변수의 이름을 지정하는 기법
  - 속성의 선언
  ```python
  class SoccerPlayer(object):
    def__init__(self, name, position, back_number): # def__init__(self, ...)은 필수, 일종의 초기화 작업
      self.name = name
      self.position = position
      self.back_number = back_number
  ```
  - 함수의 선언
  ```python
  class SoccerPlayer(object):
    def change_back_number(self, new_number):
      print("선수의 등번호를 변경하다: From %d to %d % (self.back_number, new_number))
      self.back_number = new_number
  ```
  - _ 의 쓰임
    
   
## 객체 지향 프로그래밍의 특징

## 관련 문제

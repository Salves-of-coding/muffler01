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
- 클래스 구현하기
  - 속성의 선언
  ```python
  class SoccerPlayer(object):
    def __init__(self, name, position, back_number): # def__init__(self, ...)은 필수, 일종의 초기화 작업
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
    - 1개 : 변수에 특별한 이름을 부여하고 싶지 않을 때 사용
    - 2개 : 특별한 예약 함수, 변수에 사용 
- 인스턴스 사용하기
  - 기본 문법
  ```python
  <객체명> = <클래스 이름>(__init 함수 interface, 초깃값)
  ```
  ```python
  jinhyun = SoccerPlayer("Jinhyun", "MF", 10)
  print("현재 선수의 등번호는:", jinhyun.back_number)
  jinhyun.change_back_number(5)
  print("현재 선수의 등번호는:", jinhyun.back_number)
  
  현재 선수의 등번호는: 10
  선수의 등번호를 변경한다: From 10 to 5
  현재 선수의 등번호는: 5
  ```
- 클래스를 사용하는 이유
  - 다른 사람이 쉽게 사용하기 위해서 사용
  - 다른 사람이 명확하게 이해하기 위해서 사용
  - 데이터 저장뿐이 아니라 데이터 변환을 하거나 데이터베이스에 저장하는 역할이 필요할 때 사용
  
   
## 객체 지향 프로그래밍의 특징
- 상속(inheritance) : 부모 클래스에 정의된 속성과 메소드를 자식 클래스가 물려받아 사용하는 것
  ```python
  class Person(object):
    def __init__(self, name, age):
      self.name = name
      self.age = age
      
  class Korean(Person):  # 상속
    pass
    
  first_korean = Korean("Sungchul", 35)
  print(first_korean.name)
  
  Sungchul
  ```
  - 상속을 사용하는 이유
    - 부모 클래스를 사용하여 큰 틀을 잡는다.
    - 부모 클래스에 자식 클래스를 상속하여 정보를 구체화한다.
    - 자식 클래스에서 부모 클래스에 저장되어 있는 속성과 메소드를 재정의 하여 사용할 수 있다.
- 다형성(polymorphism) : 같은 이름의 메소드가 다른 기능을 할 수 있도록 하는 것
  - 크롤러(crawler) : 인터넷에서 데이터를 모으는 프로그램
  ```python
  n_crawler = NaverCrawler()
  d_crawler = DaumCrawler()
  cralwers = [n_crawler, d_crawler]
  news = []
  for cralwer in cralwers:
    new.append(crawler,do_crawling()) # 1개의 명령어, 2개의 기능
  ```
  - NotImplementedError : sub class만 함수(메소드)를 사용할 때 선언
- 가시성(visibility)
  - 캡슐화(encapsulation)와 정보 은닉(information hiding) : 정보를 클래스 내부에서만 사용하기 위해서 사용됨
  - 데코레이터(decorator) : 정보를 클래스 외부에서 사용하기 위해서 사용됨
    - @property : 접근을 가능하게 한다.
    
## 관련 문제
- 책

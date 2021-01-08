# Chapter 3. 화면 입출력과 리스트

## 파이썬 프로그래밍 환경
- 사용자 인터페이스
  - GUI(Graphic User Interface) : 마우스와 이이콘 등 많은 도구를 사용
  - CLI(Command Line Interface) : 키보드만으로 명령을 입력하는 환경
- dos 명령어
  - dir : 파일 및 폴더 목록을 보기
  - cd.. : 상위 폴더로 이동
  - cd <이름> : <이름> 폴더로 이동 (대소문자 구분 X)
  - exit : cmd 종료
  
## 화면 입출력
- input() : 문자를 입력받는 함수
  - ex) <br>
  ```python
  print("Enter Value:")
  a = input()
  print("Value:", a)
  Enter Value: # 입력대기
  12           # 사용자 입력
  Value: 12    # 출력
  ```
- print() : 문자를 출력하는 함수
  
## Lab : 화씨온도 변환기
- 화씨온도(°F) = (섭씨온도(°C)x1.8)+32
- 실행결과<br>
본 프로그램은 섭씨온도를 화씨온도로 변환하는 프로그램입니다.<br>
변환하고 싶은 섭씨온도를 입력하세요.<br>
32.2<br>
섭씨온도 : 32.2<br>
화씨온도 : 89.96<br>
  - 코드<br>
  ```python
  print("본 프로그램은 섭씨온도를 화씨온도로 변환하는 프로그램입니다.")
  print("변환하고 싶은 섭씨온도를 입력하세요.")
  c = input()
  f = (float(c)*1.8)+32
  print("섭씨온도:", c)
  print("화씨온도:", f)
  ```
## 리스트의 이해
- 리스트가 필요한 이유 : 한 개의 변수에 많은 값을 할당하기 위함
- list : 하나의 변수에 여러 값을 할당하는 자료형으로, 시퀀스 자료형의 종류이다.
  - array(배열) = list(리스트)
- indexing & slicing
  - indexing : 리스트에 있는 값에 접근하기 위해, 값의 상대적인 주소를 사용하는 것
  - ex) <br>
  ```python
  colors = ['red','blue','green']
  ```
  red index = 0<br>
  blue index = 1<br>
  green index = 2
  - slicing : 리스트의 인덱스를 사용하여 전체 리스트에서 일부를 잘라내어 반환
  - ex) <br>
  ```python
  cities = ['서울','부산','인천','대구','대전','광주','울산','수원']
  cities[0:6]
  ['서울','부산','인천','대구','대전','광주']
  ```
  - slicing 기본 문법 <br>
  ```python
  변수명[시작 인덱스:마지막 인덱스:증가값]
  ```
## 리스트의 메모리 관리 방식
 

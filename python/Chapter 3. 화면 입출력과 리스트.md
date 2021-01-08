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

## 리스트의 메모리 관리 방식
 

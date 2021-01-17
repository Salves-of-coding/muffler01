# Chapter 6. 문자열

## 문자열의 이해
- 문자열 : 시퀀스 자료형(sequence data type)으로 리스트와 같이 데이터를 순차적으로 메모리에 저장하는 형식의 데이터
- 문자열과 메모리 공간
  - 일반적으로 문자열을 저장하기 위해서 영문자 한 글자당 1바이트의 메모리 공간을 사용
  - 1byte = 8bit (1bit = 숫자를 인식하는 최소 단위)
  - 1byte에는 2^8 = 256까지의 숫자를 저장할 수 있음
  - getsizeof
  ```python
  import sys
  print(sys.getsizeof("a"))
  
  메모리 공간 측정
  ```
  - 인코딩(encoding) 표준 규칙
    - ASCII(American Standard Code for Information Interchange)
    - CP949
    - MS949
    - UTF-8
  - 요약
    - 컴퓨터는 문자를 직접 인식하지 못한다.
    - 컴퓨터는 문자를 숫자로 변환하여 인식한다.
    - 사람들은 문자를 숫자로 변환하기 위한 규칙을 만들었다.
    - 일반적으로 이 규칙은 1개의 영문자를 1바이트, 즉 2^8정도의 공간에 저장될 수 있도록 정하였다.
- 문자열의 인덱싱
  ```python
  a = 'abcde'
  print(a[0],a[4])
  a e
  print(a[-1],a[-5])
  e a
  ```
- 문자열의 슬라이싱
  - 기본적으로 리스트와 같다
  - [Chapter 3. 화면 입출력과 리스트](https://github.com/Salves-of-coding/muffler01/blob/main/python/Chapter%203.%20%ED%99%94%EB%A9%B4%20%EC%9E%85%EC%B6%9C%EB%A0%A5%EA%B3%BC%20%EB%A6%AC%EC%8A%A4%ED%8A%B8.md)
- 문자열의 연산
  - 덧셈으로 문자열끼리 연결 가능
  - 곱셈으로 문자열 반복 연산 가능
- 문자열 함수
  - len() : 문자열의 문자 개수를 반환
  - upper() : 대문자로 변환
  - lower() : 소문자로 변환
  - title() : 각 단어의 앞글자만 대문자로 변환
  - capitalize() : 첫 문자를 대문자로 변환
  - count('문자열') : '문자열'이 몇 개 들어 있는지 개수 반환
  - find('문자열') : '문자열'이 왼쪽 끝부터 시작하여 몇 번째에 있는지 반환
  - rfind('문자열') : find() 함수와 반대 방향부터 시작
  - startswith('문자열') : '문자열'로 시작하는지 여부 반환 (True, False의 불린형으로)
  - endswith('문자열') : '문자열'로 끝나는지 여부 반환
  - strip() : 좌우 공백 삭제
  - rstrip() : 오른쪽 공백 삭제
  - lstrip() : 왼쪽 공백 삭제
  - split() : 문자열을 공백이나 다른 문자로 나누어 리스트로 반환
  - isdigit() : 문자열이 숫자인지 여부 반환
  - islower() : 문자열이 소문자인지 여부 반환
  - isupper() : 문자열이 대문자인지 여부 반환
  - 문자열끼리 연쇄가능
  ```python
  title = abcde
  title.upper().count("a")
  
  0
  ```
- 파이썬의 특수문자
  - \ + Enter : 다음 줄과 연속
  - \ : \ 문자 자체
  - \' : '문자
  - \" : "문자
  - \b : 백스페이스
  - \n : 줄 바꾸기
  - \t : Tab키
  - \e : Esc키
  - """ : 문자열을 두 줄 이상 표현할 때 사용

## 문자열 서식 지정
- 서식 지정 : 다양한 형식에 맞추어 출력할 때 필요한 작업
- % 서식과 format() 함수
  ```python
  print(1,2,3)
  print("a"+" "+"b"+" "+"c")
  print("%d %d %d" % (1,2,3))
  print("{} {} {}".format("a","b","c"))
  
  1 2 3
  a b c
  1 2 3
  a b c
  ```
  - 서식 지정의 장점
    - 데이터와 출력 형식의 분류 가능
    - 데이터를 형식에 따라 다르게 표현 가능
  - % 서식 기본 문법
  ```python
  '%자료형 % (값)'
  ```
  - 변수의 자료형에 따른 % 서식
    - %s : 문자열
    - %c : 문자 1개
    - %d : 정수
    - %f : 실수
    - %o : 8진수
    - %x : 16진수
    - %% : % 자체
  - format() 기본 문법
  ```python
  "{자료형}".format(인수)
  ```
- 패딩(padding)
  - 글자 배열을 맞추거나 소수점 자릿수를 맞추는 데 사용
  - % 서식의 패딩
  ```python
  print("%10d" % 12)
  0000000012 # 0은 공백. 즉, 12 앞에 8개의 공백을 만든다. 10자리 공간을 확보하고 12를 우측 정렬
  print("%-10d" % 12)
  1200000000 # 좌측 정렬
  ```
    - %6.4f : 6칸 확보 후 소수점 4자리까지 출력
  - format() 함수의 패딩
  ```python
  print("{0:>10s}".format("Apple"))
  00000Apple # 0은 공백. 즉, Apple 앞에 5개의 공백을 만든다. 10자리 공간을 확보하고 Apple을 우측 정렬
  print("{0:<10s}".format("Apple"))
  Apple00000 # 좌측 정렬
  ```
    - {1:>10.5f} : 10칸 확보 후 소수점 5자리까지 출력, 우측정렬
    
## 관련 문제
[문자열](https://www.acmicpc.net/step/7)

# Chapter 4. 조건문과 반복문

## 조건문
- 조건문 : 조건에 따라 동작을 하도록 하는 프로그래밍 명령어
  - 조건문을 구성하기 위해서는 조건을 나타내는 기준과 실행해야 할 명령이 필요
- if-else문
  - if-else 기본 문법
  ```python
  if <조건>:         # if를 쓰고 조건 삽입 후 ':' 입력 
    <수행 명령 1-1>  # 들여쓰기 후, 수행 명령 입력
    <수행 명령 1-2>  
  else:              # 조건이 불일치할 경우 수행할 명령
    <수행 명령 2-1>  # 조건 불일치 시 수행할 명령 입력
    <수행 명령 2-2>
  ```
- 비교 연산자
  - '<' : ~보다 작음
  - '>' : ~보다 큼
  - '==' : 같음
  - 'is' 같음(메모리 주소)
  - '!=' : 같지 않음
  - 'is not' : 같지 않음(메모리 주소)
  - '<=' : 작거나 같음
  - '>=' : 크거나 같음
- True와 False의 치환
  - 컴퓨터는 기본적으로 이진수만 처리할 수 있으며, True는 1로 False는 0으로 처리한다.
- 논리 연산자
  - and : 두 값이 모두 참일 경우 True, 그렇지 않을 경우 False
  - or : 두 값 중 하나만 참일 경우 True, 두 값 모두 거짓일 경우 False
  - not : 값을 역으로 반환하여 판단
- if-elif-else문
  -if-elif-else 기본 문법
  ```python
  if <조건 1>:         # if를 쓰고 조건 1 삽입 후 ':' 입력 
    <수행 명령 1-1>    # 들여쓰기 후, 수행 명령 입력
    <수행 명령 1-2>
  elif <조건 2>:       # elif를 쓰고 조건 2 삽입 후 ':' 입력
    <수행 명령 2-1>    # 조건 2에 일치할 시 수행할 명령 입력
    <수행 명령 2-2>
  else:                # 조건이 불일치할 경우 수행할 명령
    <수행 명령 3-1>    # 조건 불일치 시 수행할 명령 입력
    <수행 명령 3-2>
  ```
  
## Lab : 어떤 종류의 학생인지 맞히기
- 규칙
  - 나이는 (2020 - 태어난 연도 + 1)로 계산
  - 26세 이하 20세 이상이면 '대학생'
  - 20세 미만 17세 이상이면 '고등학생'
  - 17세 미만 14세 이상이면 '중학생'
  - 14세 미만 8세 이상이면 '초등학생'
  - 그 외의 경우는 '학생이 아닙니다.' 출력
- 실행 결과<br>
  ```python
  당신이 태어난 연도를 입력하세요.
  1982
  학생이 아닙니다.
  ```
- 코드
  ```python
  print("당신이 태어난 연도를 입력하세요.")
  birth_year = int(input())
  age = 2020 - birth_year + 1
  
  if 20 <= age <= 26:
    print("대학생")
  elif 17 <= age < 20:
    print("고등학생")
  elif 14 <= age < 17:
    print("중학생")
  elif 8 <= age < 14:
    print("초등학생")
  else:
    print("학생이 아닙니다.")
  ```
  
## 반복문
- 반복문 : 정해진 동작을 반복적으로 수행할 떄 내리는 명령어
- for문
  - for 기본 문법
  ```python
  for 변수 in range(시작 번호, 마지막 번호, 증가값)
  ```
  - [] : 리스트
  - range() : 범위 지정
  - '' : 문자
- while문
  - 어떤 조건이 만족하는 동안 명령 블록을 수행하고, 만족하지 않는다면 수행하지 않는 구문이다.
  - if+for문이라고 생각하면 편함
  - while 기본 문법
  ```python
  while <조건>:       # 조건 삽입 후, ':' 입력
    <수행 명령 1-1>   # 들여쓰기 후, 수행 명령 입력
    <수행 명령 1-2>
  ```
- 반복문의 제어
  - break : 반복문에서 논리적으로 반복을 종료하는 명령어
  - continue : 특정 조건에서 남은 명령을 건너뛰고 다음 반복문을 수행하는 명령어
  - else : 어떤 조건이 완전히 끝났을 때 한 번 더 실행해 주는 명령어
  
## Lab : 구구단 계산기
- 규칙
  - 프로그램이 시작되면 '구구단 몇 단을 계산할까?'가 출력된다.
  - 사용자는 계산하고 싶은 구구단 숫자를 입력한다.
  - 프로그램은 '구구단 n단을 계산한다.'라는 메시지와 함께 구구단의 결과를 출력한다.
- 실행 결과 <br>
  ```python
  구구단 몇 단을 계산할까?
  5
  구구단 5단을 계산한다.
  5x1=5
  5x2=10
  ...
  5x8=40
  5x9=45
  ```
- 코드 <br>
  ```python
  print("구구단 몇 단을 계산할까?")
  n = int(input())
  print("구구단",n,"단을 계산한다.")
  
  for i i range(1, 10):
    result = n * i
    print(n,"x",i,"=",result)
  ```
  
## 조건문과 반복문 실습
- 문자열 역순 출력
  - 문자열이 들어오면 for문을 이용해서 문자열을 역순으로 출력함
- 코드
  ```python
  sentence = "문자열"
  reverse_sentence = ''
  for i in sentence:
    reverse_sentence = i + reverse_sentence
  print(reverse_sentence)
  열자문
  ```
- 십진수를 이진수로 변환
  - 십진수 변수를 이진수로 변환 후 출력함
- 코드
  ```python
  decimal = 10
  result = ''
  while (decimal > 0):
    remainder = decimal % 2
    decimal = decimal // 2
    result = str(remainder) + result
  print(result)
  1010
  ```

## Lab : 숫자 찾기 게임
- 규칙
  - 먼저 컴퓨터가 1에서 100까지 중 임의의 숫자를 생성한다.
  - 다음으로 사용자가 추측하는 숫자를 입력하면 컴퓨터가 생성한 임의의 숫자보다 큰지, 작은지를 계속 비교해 준다.
  - 정답을 맞힐 때까지 계속하다가 맞히면 '정답입니다. 입력한 숫자는 n입니다.'를 출력한다.
- 실행 결과
  ```python
  숫자를 맞혀 보세요.(1~100)
  75
  숫자가 너무 큽니다.
  70
  숫자가 너무 작습니다.
  73
  숫자가 너무 작습니다.
  74
  정답입니다. 입력한 숫자는 74입니다.
  ```
- 코드
  ```python
  import random
  number = random.randint(1, 100)
  print("숫자를 맞혀 보세요. (1~100)")
  users_input = int(input())
  while (users_input is not number):
    if users_input > number:
      print("숫자가 너무 큽니다.")
    else:
      print("숫자가 너무 작습니다.")
    user_input = int(input())
  else:
    print("정답입니다.","입력한 숫자는",users_input,"입니다.")
  ```

## Lab : 연속적인 구구단 계산기
- 규칙
  - 프로그램이 시작되면 '구구단 몇 단을 계산할까요(1~9)?'가 출력된다.
  - 사용자는 계산하고 싶은 구구단 숫자를 입력한다.
  - 프로그램은 '구구단 n단을 계산합니다.'라는 메시지와 함께 구구단의 결과를 출력한다.
  - 기존 문제와 달리, 이번에는 프로그램이 계속 실행되다가 종료 조건에 해당하는 숫자(여기에서는 0)를 입력하면 종료된다.
- 실행 결과
  ```python
  구구단 몇 단을 계산할까요(1~9)?
  3
  구구단 3단을 계산합니다.
  3x1=3
  3x2=6
  ...
  3x9=27
  구구단 몇 단을 계산할까요(1~9)?
  0
  구구단 게임을 종료합니다.
  ```
- 코드
  ```python
  print("구구단 몇 단을 계산할까요(1~9)?")
  x = 1
  while (x is not 0):
    x = int(input())
    if x == 0: break
    if not(1<=x<=9):
      print("잘못 입력했습니다.","1부터 9사이 숫자를 입력하세요.")
      continue
    else:
      print("구구단"+str(x)+"단을 계산합니다.")
      for i in range(1,10):
        print(str(x)+"x"+str(i)+"="+str(x*i))
      print("구구단 몇 단을 계산할까요(1~9)?")
  print("구구단 게임을 종료합니다.")
  ```
  
## Lab : 평균구하기
- 규칙
  - 이차원 리스트이므로 각 행을 호출하고 각 열에 있는 값을 더해 학생별 평균을 구한다.
  - for문 2개를 사용한다.
- 실행 결과
  ```python
  [47.0,74.0,51.0,60.0,90.0]
  ```
- 코드
  ```python
  kor_score = [49,80,20,100,80]
  math_score = [43,60,85,30,90]
  eng_score = [49,82,48,50,100]
  midterm_score = [kor_score,math_score,eng_score]
  
  student_score = [0,0,0,0,0]
  i = 0
  for subject in midterm_score:
    for score in subject:
      student_score[i] += score
      i += 1
    i = 0
  else:
    a,b,c,d,e = student_score
    student_average = [a/3,b/3,c/3,d/3,e/3]
    print(student_average)
  ```
  
## 코드의 오류를 처리하는 방법
- 버그와 디버그
  - 프로그래밍에서 오류를 버그라고 하고, 오류를 수정하는 과정을 디버그라고 한다.
- 오류의 종류와 해결 방법
  - 문법적 오류 : 인터프리터가 해석을 못 해 코드 자체를 실행시키지 못하는 오류
    - 들여쓰기 오류 : IndentationError 출력
    - 오탈자로 인한 오류 : NameError 출력
  - 논리적 오류 : 논리적으로 잘못된 부분이 있을 때 실행시키지 못하는 오류
  
## 관련 문제
[if문](https://www.acmicpc.net/step/4)<br>
[for문](https://www.acmicpc.net/step/3)<br>
[while문](https://www.acmicpc.net/step/2)<br>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_condition(void) {
	// if 문
	// if (조건) {수행문} else {수행문}
	/*
	int age = 15;
	if (age >= 20)
		printf("일반인입니다.\n");
	else
		printf("학생입니다.\n");
	*/

	// if (조건) {수행문} else if (조건) {수행문} else {수행문}
	/*
	int age = 25;
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}
	else
		printf("학생이 아닙니다.\n");
	*/

	// break & continue
	// break문
	// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 합니다.
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break; // break를 만나면 for문을 탈출
		}
		printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
	}
	*/
	// continue문
	// 7번 학생 결석, 6번부터 10번까지 조별 발표를 합니다.
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >=6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue; // continue를 만나면 수행문을 건너뜀
			}
			printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
		}
	}
	*/

	// && : and / || : or
	/*
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b && c == d) {
		printf("a와 b는 같고, c와 d도 같습니다.\n");
	}
	else {
		printf("값이 서로 다릅니다.\n");
	}
	*/

	// 가위 바위 보 (0,1,2)
	/*
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	}
	*/

	// switch case
	/*
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default:printf("몰라요\n"); break;
	}
	*/

	/*
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생입니다.\n"); break;
	case 14:
	case 15:
	case 16: printf("중학생입니다.\n"); break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다.\n"); break;
	default: printf("학생이 아닙니다.\n"); break;
	}
	*/

	// 프로젝트
	// up and down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100

	printf("숫자 : %d\n", num);

	int answer = 0; // 정답
	int chance = 5; // 기회

	while (1) // 1은 참, 0은 거짓
	{
		printf("남은 기회 : %d\n", chance--);
		printf("숫자를 입력하세요.(1~100) : \n");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("Down\n\n");
		}
		else if (answer < num) {
			printf("Up\n\n");
		}
		else if (answer == num) {
			printf("정답입니다.\n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n\n");
			break;
		}

		if (chance == 0) {
			printf("모든 기회를 사용하셔서 아쉽게 실패했습니다.\n");
			break;
		}
	}

	return 0;
}
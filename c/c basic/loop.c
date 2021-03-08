#include <stdio.h>

int main_loop(void) {
	// ++ 연산자
	/*
	int a = 10;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	*/

	/*
	int b = 20;
	printf("b = %d\n", ++b); // ++이 앞에 있을 떄, ++를 수행하고 문장을 끝내라.
	printf("b = %d\n", b++); // ++이 뒤에 있을 때, 문장을 끝내고 ++를 수행해라.
	printf("b = %d\n", b);
	*/ 
	
	/*
	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	*/

	// for 반복문
	// for (선언; 조건; 증감) {수행문}
	/*
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}
	*/

	// while 반복문
	// while (조건) {수행문}
	/*
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
	}
	*/

	// do while 반복문
	// do {수행문} while (조건);
	/*	
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/

	// 이중 반복문
	/*
	for (int i = 1; i <= 3; i++) {
		printf("첫번쨰 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("    두번쨰 반복문 : %d\n", j);
		}
	}
	*/

	// 구구단
	/*
	for (int i = 2; i <= 9; i++) {
		printf("--- %d단 ---\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	*/

	// 별 피라미드 쌓기
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	// 거꾸로 별 피라미드 쌓기
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	// 프로젝트
	/*
	   *
	  ***
	 *****
	******* 
	*/
	int floor;

	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
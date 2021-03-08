#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_random(void) {
	/*
	srand(time(NULL)); // 난수초기화
	int num = rand() % 3 + 1; // 3개의 경우의 수 중 1가지 (1,2,3)
	*/

	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	return 0;
}


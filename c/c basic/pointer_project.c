#include <stdio.h>
#include <time.h>

// 물고기가 6마리 있다.
// 이들은 어항에 살고 있다. 어항은 사막에 위치하며 물이 아주 빨리 증발한다.
// 물이 다 증발하기 전에 어항에 물을 주어 물고기를 살려줘야 한다.
// 물고기는 시간이 지날 수록 점점 커져서 나중에는 수확할 수 있다.

int level;
int arrayFish[6];
int* cursor; // 선택하는 포인터

void initDate();
void printFishes();
void decreaseWater(long elapsedTime);

int main(void)
{
	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지 (사용자 입력)
	initDate(); // 초기화

	cursor = arrayFish; // cursor[0] ... cursor[1] ...

	startTime = clock(); // 현재 시간을 millisecond (1000분의 1초) 단위로 반환
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠습니까? \n");
		scanf_s("%d", &num);

		// 입력값 check
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);

		// 직전 경과 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		// 물 높이를 계산하기 위해서
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초 \n", prevElapsedTime);

		// 어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다.
		// 1. 어항의 물이 0 인 경우, 물을 주지 않아도 된다. 
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 죽었습니다. 물을 줄 수 없습니다.\n", num);
		}
		// 2. 어항의 물이 0 아닌 경우, 물을 준다. 100 을 넘지 않는지 check
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 준다.
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] + 1
		}

		// 레벨업을 할 건지 확인 (레벨업은 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			// 레벨업
			level++; // level : 1 -> level : 2 -> ...
			printf(" *** Level Up : %d -> %d *** \n\n", level - 1, level);

			// 최종 레벨 : 5
			if (level == 5)
			{
				printf("\n\n *** 최고 Level 달성! 게임을 종료합니다. *** \n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 물고기가 모두 죽었다.
			printf("\n 모든 물고기가 죽었다. \n");
			exit(0); 
		}
		else
		{
			// 최소 1마리 이상의 물고기가 살아있다.
			printf("\n 물고기가 아직 살아있다. \n");
		}
		prevElapsedTime = totalElapsedTime; // 임시로 값을 저장

		// 10초 -> 15초 (5초 gap = prev) - > 25초 (10초 계산 : 25 - 15) 즉, 15가 저장될 공간이 없다. 따라서 prev에 15초를 저장해둠.

	}

	return 0;
}

void initDate()
{
	level = 1; // 게임 레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이 (0~100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0;i < 6;i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3	은 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6;i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 물고기가 살아있음
	}
	return 0; // 물고기가 죽었음
}
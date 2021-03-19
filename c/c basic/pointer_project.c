#include <stdio.h>
#include <time.h>

// ����Ⱑ 6���� �ִ�.
// �̵��� ���׿� ��� �ִ�. ������ �縷�� ��ġ�ϸ� ���� ���� ���� �����Ѵ�.
// ���� �� �����ϱ� ���� ���׿� ���� �־� ����⸦ ������ �Ѵ�.
// ������ �ð��� ���� ���� ���� Ŀ���� ���߿��� ��Ȯ�� �� �ִ�.

int level;
int arrayFish[6];
int* cursor; // �����ϴ� ������

void initDate();
void printFishes();
void decreaseWater(long elapsedTime);

int main(void)
{
	long startTime = 0; // ���� ���� �ð�
	long totalElapsedTime = 0; // ��� �ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ������ (����� �Է�)
	initDate(); // �ʱ�ȭ

	cursor = arrayFish; // cursor[0] ... cursor[1] ...

	startTime = clock(); // ���� �ð��� millisecond (1000���� 1��) ������ ��ȯ
	while (1)
	{
		printFishes();
		printf("�� �� ���׿� ���� �ֽðڽ��ϱ�? \n");
		scanf_s("%d", &num);

		// �Է°� check
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld �� \n", totalElapsedTime);

		// ���� ��� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		// �� ���̸� ����ϱ� ���ؼ�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld �� \n", prevElapsedTime);

		// ������ ���� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�.
		// 1. ������ ���� 0 �� ���, ���� ���� �ʾƵ� �ȴ�. 
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �׾����ϴ�. ���� �� �� �����ϴ�.\n", num);
		}
		// 2. ������ ���� 0 �ƴ� ���, ���� �ش�. 100 �� ���� �ʴ��� check
		else if (cursor[num - 1] + 1 <= 100)
		{
			// ���� �ش�.
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] + 1
		}

		// �������� �� ���� Ȯ�� (�������� 20�ʸ��� �ѹ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			// ������
			level++; // level : 1 -> level : 2 -> ...
			printf(" *** Level Up : %d -> %d *** \n\n", level - 1, level);

			// ���� ���� : 5
			if (level == 5)
			{
				printf("\n\n *** �ְ� Level �޼�! ������ �����մϴ�. *** \n\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// ����Ⱑ ��� �׾���.
			printf("\n ��� ����Ⱑ �׾���. \n");
			exit(0); 
		}
		else
		{
			// �ּ� 1���� �̻��� ����Ⱑ ����ִ�.
			printf("\n ����Ⱑ ���� ����ִ�. \n");
		}
		prevElapsedTime = totalElapsedTime; // �ӽ÷� ���� ����

		// 10�� -> 15�� (5�� gap = prev) - > 25�� (10�� ��� : 25 - 15) ��, 15�� ����� ������ ����. ���� prev�� 15�ʸ� �����ص�.

	}

	return 0;
}

void initDate()
{
	level = 1; // ���� ���� (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ���� (0~100)
	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
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
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3	�� ���̵� ������ ���� ��
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
			return 1; // ����Ⱑ �������
	}
	return 0; // ����Ⱑ �׾���
}
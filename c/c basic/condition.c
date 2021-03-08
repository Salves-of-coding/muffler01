#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_condition(void) {
	// if ��
	// if (����) {���๮} else {���๮}
	/*
	int age = 15;
	if (age >= 20)
		printf("�Ϲ����Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");
	*/

	// if (����) {���๮} else if (����) {���๮} else {���๮}
	/*
	int age = 25;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}
	else
		printf("�л��� �ƴմϴ�.\n");
	*/

	// break & continue
	// break��
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������.\n");
			break; // break�� ������ for���� Ż��
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}
	*/
	// continue��
	// 7�� �л� �Ἦ, 6������ 10������ ���� ��ǥ�� �մϴ�.
	/*
	for (int i = 1; i <= 30; i++) {
		if (i >=6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue; // continue�� ������ ���๮�� �ǳʶ�
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
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
		printf("a�� b�� ����, c�� d�� �����ϴ�.\n");
	}
	else {
		printf("���� ���� �ٸ��ϴ�.\n");
	}
	*/

	// ���� ���� �� (0,1,2)
	/*
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}
	*/

	// switch case
	/*
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default:printf("�����\n"); break;
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
	case 13: printf("�ʵ��л��Դϴ�.\n"); break;
	case 14:
	case 15:
	case 16: printf("���л��Դϴ�.\n"); break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�.\n"); break;
	default: printf("�л��� �ƴմϴ�.\n"); break;
	}
	*/

	// ������Ʈ
	// up and down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100

	printf("���� : %d\n", num);

	int answer = 0; // ����
	int chance = 5; // ��ȸ

	while (1) // 1�� ��, 0�� ����
	{
		printf("���� ��ȸ : %d\n", chance--);
		printf("���ڸ� �Է��ϼ���.(1~100) : \n");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("Down\n\n");
		}
		else if (answer < num) {
			printf("Up\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�.\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n\n");
			break;
		}

		if (chance == 0) {
			printf("��� ��ȸ�� ����ϼż� �ƽ��� �����߽��ϴ�.\n");
			break;
		}
	}

	return 0;
}
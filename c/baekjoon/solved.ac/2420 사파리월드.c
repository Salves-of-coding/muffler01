// 2480 �ֻ��� ����
/*
1~6�� �ֻ��� 3��
1. ���� ���� 3�� ������ 10000 + (���� ��) x 1000
2. ���� ���� 2���� ������ 1000 + (���� ��) x 100
3. ��� �ٸ� ���� ������ (�� �� ���� ū ��) x 100

ex) 3 3 6 -> 1000 + 3 x 100 = 1300
	2 2 2 -> 10000 + 2 x 1000 = 12000
	6 2 5 -> 6 x 100 = 600

�Է�
ù° �ٿ� 3���� ���� ��ĭ�� ���̿� �ΰ� ���� �־�����.

���
ù° �ٿ� ������ ����� ��� �Ѵ�.
*/
#include <stdio.h>

int main(void)
{
	int num01, num02, num03;
	int max;
	int result = 0;

	scanf_s("%d %d %d", &num01, &num02, &num03);

	if (num01 == num02) {
		if (num02 == num03) {
			result = 10000 + num01 * 1000;
			printf("%d", result);
		}
		else if (num02 != num03) {
			result = 1000 + num01 * 100;
			printf("%d", result);
		}
	}
	else if (num01 != num02) {
		if (num02 == num03) {
			result = 1000 + num02 * 100;
			printf("%d", result);
		}
		else if (num02 != num03) {
			if (num01 == num03) {
				result = 1000 + num01 * 100;
				printf("%d", result);
			}
			else if (num01 != num03) {
				max = (num01 > num02) ? num01 : num02;
				max = (max > num03) ? max : num03;
				result = 100 * max;
				printf("%d", result);
			}
		}
	}
	return result;
}
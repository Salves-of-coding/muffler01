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
	int num01, num02, num03;							// �޸� Ȯ��
	int max;											// 3���� ���, ����� �ִ� 
	int result = 0;										// ����� �� �ʱ�ȭ

	scanf("%d %d %d", &num01, &num02, &num03);			// ���� �Ҵ� (������ ��������)

	if (num01 == num02) {								// num01 == num02: 1�� or 2��
		if (num02 == num03) {							// num02 == num03: 1��
			result = 10000 + num01 * 1000;				// 1�� ����� ���� (num01���� ���)
			printf("%d", result);						// ���
		}
		else if (num02 != num03) {						// num02 != num03: 2��
			result = 1000 + num01 * 100;				// 2�� ����� ���� (num01���� ���)
			printf("%d", result);						// ���
		}
	}
	else if (num01 != num02) {							// num01 != num02: 2�� or 3��
		if (num02 == num03) {							// num02 == num03: 2��
			result = 1000 + num02 * 100;				// 2�� ����� ���� (num02���� ���)
			printf("%d", result);						// ���
		}
		else if (num02 != num03) {						// num02 != num03: 2�� or 3��
			if (num01 == num03) {						// num01 == num03: 2�� (num02�� �ٸ����)
				result = 1000 + num01 * 100;			// 2�� ����� ���� (num01���� ���)
				printf("%d", result);					// ���	
			}
			else if (num01 != num03) {					// num02 != num03: 3��
				max = (num01 > num02) ? num01 : num02;	// ���׿����ڷ� max ����
				max = (max > num03) ? max : num03;		// max�� num03 ���Ͽ� ���ο� max �Ҵ�
				result = 100 * max;						// 3�� ����� ���� (max�� ���)
				printf("%d", result);					// ���
			}
		}
	}
	return 0;
}
// 1598 ������ ���� ���� ���� 
#include <stdio.h>
#include <stdlib.h> // abs �Լ��� ����ϱ� ���� �������

int main(void)
{
	int a, b;
	int result = 0;

	scanf_s("%d %d", &a, &b);

	a = a - 1; b = b - 1; // ������ 0���� ����� ���ؼ� ��� ���ڿ� -1�� ���ش�.
	result = abs(a / 4 - b / 4) + abs(a % 4 - b % 4); // 4�� ���� �򳢸� ����, 4�� ���� ���������� ���� ���Ѵ�. (���밪)
	printf("%d", result);
}
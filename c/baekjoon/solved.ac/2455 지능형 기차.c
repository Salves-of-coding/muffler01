// 2455 ������ ����
#include <stdio.h>

int main(void)
{
	int input01, input02;
	int sum = 0; // ���� ���� ��� ��
	int max = 0; // �ִ��� ���� �� ������ ����� ����
	
	for (int i = 0;i < 4;i++)
	{
		scanf("%d %d", &input01, &input02);
		sum -= input01; // ���� ���
		sum += input02; // ź ���
		if (max < sum) 
		{
			max = sum; // �ִ� ����
		}
	}
	printf("%d", max);

	return 0;
}
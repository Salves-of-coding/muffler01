// 10039 ��� ����
#include <stdio.h>

int main(void)
{
	int input[5] = { 0, };	
	int sum = 0;	// += �� ����ϱ� ���� �ʱ�ȭ
	int result;

	for (int i = 0;i < 5; i++)
	{
		scanf("%d", &input[i]);
		if (input[i] < 40)
		{
			input[i] = 40;	// 40���� ���� (�����н�)
		}
		sum += input[i];	// sum���� �����ش�.
	}

	result = sum / 5;
	printf("%d", result);
	
	return 0;
}
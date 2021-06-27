// 2455 지능형 기차
#include <stdio.h>

int main(void)
{
	int input01, input02;
	int sum = 0; // 기차 안의 사람 수
	int max = 0; // 최댓값이 갱신 될 때마다 저장될 공간
	
	for (int i = 0;i < 4;i++)
	{
		scanf("%d %d", &input01, &input02);
		sum -= input01; // 내린 사람
		sum += input02; // 탄 사람
		if (max < sum) 
		{
			max = sum; // 최댓값 갱신
		}
	}
	printf("%d", max);

	return 0;
}
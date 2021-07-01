// 10039 평균 점수
#include <stdio.h>

int main(void)
{
	int input[5] = { 0, };	
	int sum = 0;	// += 를 사용하기 위해 초기화
	int result;

	for (int i = 0;i < 5; i++)
	{
		scanf("%d", &input[i]);
		if (input[i] < 40)
		{
			input[i] = 40;	// 40으로 조정 (보충학습)
		}
		sum += input[i];	// sum으로 합해준다.
	}

	result = sum / 5;
	printf("%d", result);
	
	return 0;
}
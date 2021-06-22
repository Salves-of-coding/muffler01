// 2480 주사위 세개
/*
1~6인 주사위 3개
1. 같은 눈이 3개 나오면 10000 + (같은 눈) x 1000
2. 같은 눈이 2개만 나오면 1000 + (같은 눈) x 100
3. 모두 다른 눈이 나오면 (그 중 가장 큰 눈) x 100

ex) 3 3 6 -> 1000 + 3 x 100 = 1300
	2 2 2 -> 10000 + 2 x 1000 = 12000
	6 2 5 -> 6 x 100 = 600

입력
첫째 줄에 3개의 눈이 빈칸을 사이에 두고 각각 주어진다.

출력
첫째 줄에 게임의 상금을 출력 한다.
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
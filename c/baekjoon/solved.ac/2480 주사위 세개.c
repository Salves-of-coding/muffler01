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
	int num01, num02, num03;							// 메모리 확보
	int max;											// 3번의 경우, 사용할 최댓값 
	int result = 0;										// 결과값 및 초기화

	scanf("%d %d %d", &num01, &num02, &num03);			// 변수 할당 (공백을 기준으로)

	if (num01 == num02) {								// num01 == num02: 1번 or 2번
		if (num02 == num03) {							// num02 == num03: 1번
			result = 10000 + num01 * 1000;				// 1번 경우의 계산식 (num01으로 계산)
			printf("%d", result);						// 출력
		}
		else if (num02 != num03) {						// num02 != num03: 2번
			result = 1000 + num01 * 100;				// 2번 경우의 계산식 (num01으로 계산)
			printf("%d", result);						// 출력
		}
	}
	else if (num01 != num02) {							// num01 != num02: 2번 or 3번
		if (num02 == num03) {							// num02 == num03: 2번
			result = 1000 + num02 * 100;				// 2번 경우의 계산식 (num02으로 계산)
			printf("%d", result);						// 출력
		}
		else if (num02 != num03) {						// num02 != num03: 2번 or 3번
			if (num01 == num03) {						// num01 == num03: 2번 (num02가 다른경우)
				result = 1000 + num01 * 100;			// 2번 경우의 계산식 (num01으로 계산)
				printf("%d", result);					// 출력	
			}
			else if (num01 != num03) {					// num02 != num03: 3번
				max = (num01 > num02) ? num01 : num02;	// 삼항연산자로 max 설정
				max = (max > num03) ? max : num03;		// max와 num03 비교하여 새로운 max 할당
				result = 100 * max;						// 3번 경우의 계산식 (max로 계산)
				printf("%d", result);					// 출력
			}
		}
	}
	return 0;
}
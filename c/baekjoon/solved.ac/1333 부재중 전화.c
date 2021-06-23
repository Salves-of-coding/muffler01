// 1598 꼬리를 무는 숫자 나열 
#include <stdio.h>
#include <stdlib.h> // abs 함수를 사용하기 위한 헤더파일

int main(void)
{
	int a, b;
	int result = 0;

	scanf_s("%d %d", &a, &b);

	a = a - 1; b = b - 1; // 원점을 0으로 만들기 위해서 모든 숫자에 -1을 해준다.
	result = abs(a / 4 - b / 4) + abs(a % 4 - b % 4); // 4로 나눈 몫끼리 빼고, 4로 나눈 나머지끼리 빼서 더한다. (절대값)
	printf("%d", result);
}
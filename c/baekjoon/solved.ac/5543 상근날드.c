// 5543 상근날드
/*
상근날드에서 가장 잘 팔리는 메뉴는 세트 메뉴이다. 
주문할 때, 자신이 원하는 햄버거와 음료를 하나씩 골라, 세트로 구매하면, 가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.
햄버거는 총 3종류 상덕버거, 중덕버거, 하덕버거가 있고, 음료는 콜라와 사이다 두 종류가 있다.
햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.

입력은 총 다섯 줄이다. 첫째 줄에는 상덕버거, 
둘째 줄에는 중덕버거, 
셋째 줄에는 하덕버거의 가격이 주어진다.
넷째 줄에는 콜라의 가격, 
다섯째 줄에는 사이다의 가격이 주어진다. 
모든 가격은 100원 이상, 2000원 이하이다.

첫째 줄에 가장 싼 세트 메뉴의 가격을 출력한다.

ex) 800
	700
	900
	198
	330

	848
*/
#include <stdio.h>

int main(void)
{
	int user_input[5] = { 0 };
	int ham = 0;
	int drink = 0;
	int min_h = 0;	// 햄버거 최솟값
	int min_d = 0;	// 음료수 최솟값
	int result = 0;

	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &user_input[i]);
	}

	min_h = (user_input[0] < user_input[1]) ? user_input[0] : user_input[1];	// 삼항 연산자 이용하여 최솟값 계산
	min_h = (min_h < user_input[2]) ? min_h : user_input[2];
	min_d = (user_input[3] < user_input[4]) ? user_input[3] : user_input[4];
	result = min_h + min_d - 50;	// 주어진 계산식

	printf("%d", result);

	return 0;
}
#include <stdio.h>

int main_array(void) 
{
	// 배열
	//int subway_1 = 30; // 지하철 1호칸에는 30명을 타고 있습니다.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1 호칸에는 %d 명이 타고 있습니다.\n", subway_1);
	//printf("지하철 2 호칸에는 %d 명이 타고 있습니다.\n", subway_2);
	//printf("지하철 3 호칸에는 %d 명이 타고 있습니다.\n", subway_3);

	// 여러 개의 변수를 함께, 동시에 선언
	//int subway_array[3]; // [0],[1],[2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d 호칸에는 %d 명이 타고 있습니다.\n", i+1, subway_array[i]);
	//}

	// 값 설정 방법
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[10]; // 초기화를 하지 않으면, 더미 값 발생 따라서 값은 항상 초기화를 해줘야 한다.
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	// 배열 크기는 항상 상수로 선언
	/*int size = 10;
	int arr[10];*/

	// 배열 값을 지정하지 않으면 자동으로 0으로 초기화
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 자동으로 배열 크기를 맞추어 준다.
	// int arr[] = { 1,2 }; // arr[2]

	// float도 마찬가지이다.
	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	// 문자 vs 문자열
	// 문자 : 1글자
	// 문자열 : 1글자 이상
	/*char c = 'A';
	printf("%c\n", c);*/

	// 문자열 끝에는 끝을 의미하는 NULL 문자 '\0'이 포함되어야 된다.
	//char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0] // 따라서 크기를 7로 해야된다.
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str)); // sizeof() : 크기를 알려주는 함수

	/*char str[] = "coding";
	for (int i = 0;i < sizeof(str);i++) 
	{
		printf("%c\n", str[i]);
	}*/

	/*char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/
	// 영어 1글자 : 1 byte
	// 한글 1글자 : 2 byte
	// char 크기 : 1 byte

	/*char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);*/

	/*char c_array[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);
	for (int i = 0;i < sizeof(c_array);i++)
	{
		printf("%c\n", c_array[i]);
	}*/

	// 아스키 코드
	/*char c_array[10] = { 'c','o','d','i','n','g' };
	for (int i = 0;i < sizeof(c_array);i++)
	{
		printf("%d\n", c_array[i]); // 아스키 코드가 출력 (null = 0)
	}*/

	// 문자열 입력 받기 : 경찰서 조서 쓰기 예제
	/*char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// 아스키 코드 : ansi(미국표준협회)에서 제시한 표준 코드 체계
	// 총 7bit, 총 128개의 코드(0~127)
	// a : 97, A : 65, 0 : 48
	
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	printf("%c\n", '\0');
	printf("%d\n", '\0');*/

	// 아스키 코드 : 0 ~ 127
	for (int i = 0;i < 128;i++)
	{
		printf("아스키 코드 정수 %d : %c\n", i, i);
	}



	return 0;
}
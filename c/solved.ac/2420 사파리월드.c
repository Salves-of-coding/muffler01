// 2420 사파리월드
/*
첫째 줄에 두 도메인의 유명도 N과 M이 주어진다.
첫째 줄에 두 유명도의 차이(|N-M|)을 출력한다.
*/

#include <stdio.h>

int main(void)
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n - m >= 0) 
		printf("%lld", n - m);
	else 
		printf("%lld", m - n);

	return 0;
}
// 2420 ���ĸ�����
/*
ù° �ٿ� �� �������� ���� N�� M�� �־�����.
ù° �ٿ� �� ������ ����(|N-M|)�� ����Ѵ�.
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
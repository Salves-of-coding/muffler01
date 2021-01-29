// 2884 알람 시계

#include <stdio.h> 

int main() {
	int h, m; // h, m 선언

	scanf("%d %d", &h, &m); // h, m입력 받음

	if (m >= 45) // m >= 45인 경우,
		printf("%d %d", h, m - 45); // h, m-45 출력
	else if (m < 45 && h > 0) // m < 45이고, h > 0인 경우,
		printf("%d %d", h - 1, 15 + m); // h-1, 15+m 출력
	else // m < 45이고, h <= 0인 경우,
		printf("%d %d", 23, 15 + m); // 23, 15+m 출력

	return 0;
}
// 2884 �˶� �ð�

#include <stdio.h> 

int main() {
	int h, m; // h, m ����

	scanf("%d %d", &h, &m); // h, m�Է� ����

	if (m >= 45) // m >= 45�� ���,
		printf("%d %d", h, m - 45); // h, m-45 ���
	else if (m < 45 && h > 0) // m < 45�̰�, h > 0�� ���,
		printf("%d %d", h - 1, 15 + m); // h-1, 15+m ���
	else // m < 45�̰�, h <= 0�� ���,
		printf("%d %d", 23, 15 + m); // 23, 15+m ���

	return 0;
}
#include <stdio.h>

int main() {
	int a, b;
	int hund, ten, one, result;

	scanf("%d", &a);
	scanf("%d", &b);

	hund = b / 100;
	ten = (b % 100) / 10;
	one = b % 10;

	printf("%d\n", a * one);
	printf("%d\n", a * ten);
	printf("%d\n", a * hund);
	printf("%d", a * b);
	return 0;
}
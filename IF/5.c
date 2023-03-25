#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	c = a * 60 + b - 45;
	if (c >= 0) 
		printf("%d %d", c / 60, c % 60);
	else 
		printf("%d %d", (1440 + c) / 60, (1440 + c) % 60);
}
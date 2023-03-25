#include <stdio.h>

int main()
{
	int a, b, c ,d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = a * 60 + b + c;
	if (d < 1440) 
		printf("%d %d", d / 60, d % 60);
	else 
		printf("%d %d", (d - 1440) / 60, (d - 1440) % 60);
}
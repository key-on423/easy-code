#include <stdio.h>

int main()
{
	printf("Please enter the number of \"hello,world\"");
	int x;
	scanf("%d", &x);
	for (int y = 1;y <= x;y++)
	{
		printf("hello world!--%d\n", y);
		Sleep(50);
	}
		return 0;
}
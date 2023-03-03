//truth.c--那些值为真
#include<stdio.h>
int main(void)
{
	int n = 3;

	while (n)
	{
		printf("%2d is true\n", n--);
	}

	printf("%2d is false\n", n);

	n = -3;

	while (n)
	{
		printf("%2d is true\n", n++);
	}

	printf("%2d is false\n", n);

	return 0;
}
//只要n不为0，都为真，n为0时会跳出循环
/*
 3 is true
 2 is true
 1 is true
 0 is false
-3 is true
-2 is true
-1 is true
 0 is false
*/
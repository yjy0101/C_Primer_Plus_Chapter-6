#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;

	for (row = 0; row < ROWS;row++)						//外部循环
	{
		for (ch = 'A';ch < ('A' + CHARS);ch++)			//内部循环
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
/*
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
ABCDEFGHIJ
*/
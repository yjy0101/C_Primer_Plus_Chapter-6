#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;

	for (row = 0; row < ROWS;row++)						//�ⲿѭ��
	{
		for (ch = 'A';ch < ('A' + CHARS);ch++)			//�ڲ�ѭ��
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
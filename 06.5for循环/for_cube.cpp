/*for_cube.c--ֻ��forѭ������һ��������*/
#include<stdio.h>
int main(void)
{
	int num;

	printf("   n   n cubed\n");

	for (num = 1 ; num <= 6; num++)						//for(initialize; test; update)
	{													//	statement
		printf("%5d %5d\n", num, num * num * num);		//��testΪ�ٻ�0֮ǰ���ظ�ִ��statement����
	}

	return 0;
}
/*
   n   n cubed
	1     1
	2     8
	3    27
	4    64
	5   125
	6   216
*/
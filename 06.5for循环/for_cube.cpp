/*for_cube.c--只用for循环创建一个立方表*/
#include<stdio.h>
int main(void)
{
	int num;

	printf("   n   n cubed\n");

	for (num = 1 ; num <= 6; num++)						//for(initialize; test; update)
	{													//	statement
		printf("%5d %5d\n", num, num * num * num);		//在test为假或0之前，重复执行statement部分
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
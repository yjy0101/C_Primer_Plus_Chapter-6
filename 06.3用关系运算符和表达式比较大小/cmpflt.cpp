/*cmpflt.c--浮点数比较*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value fo pi?\n");
	scanf_s("%lf", &response);
													//fabs()函数：取绝对值的函数
	while (fabs(response - ANSWER) > 0.0001)		//fabs()函数(声明在math.h头文件中)可以方便地比较浮点数
	{
		printf("Try again!\n");
		scanf_s("%lf", &response);
	}

	printf("Close enough!\n");

	return 0;
}
/*
What is the value fo pi?
3.14
Try again!
3.141
Try again!
3.14159
Close enough!
*/
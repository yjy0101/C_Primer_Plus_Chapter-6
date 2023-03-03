#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to qiut): ");
	status = scanf_s("%ld", &num);		//如果没有读取任何项，且需要读取一个数字而用户却输入一个非数值字符串，scanf()便返回0；
	while (status == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf_s("%ld", &num);
	}

	printf("Those integers sum to %ld.\n", sum);

	return 0;
}
/*
Please enter an integer to be summed (q to qiut): 44
Please enter next integer (q to quit): 33
Please enter next integer (q to quit): 88
Please enter next integer (q to quit): 121
Please enter next integer (q to quit): q
Those integers sum to 286.
*/
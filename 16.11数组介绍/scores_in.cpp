#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	
	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0;index < SIZE;index++)
	{
		scanf_s("%d", &score[index]);					//读取10个分数，并存到数组对应的元素中
	}

	printf("The scores read in are as follows:\n");		//此时，数组中的每个元素都储存了一个分数

	for (index = 0; index < SIZE;index++)
	{
		printf("%-5d", score[index]);					//通过数组名[角标]就能取出数组中对应角标元素的值
	}													//从数组中取出元素中的值，是通过数组名[角标]即可，不需要使用取地址符&

	printf("\n");

	for (index = 0;index < SIZE;index++)
	{
		sum += score[index];
	}

	average = (float)sum / SIZE;

	printf("Sum of scores = %d,average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	return 0;
}
/*
Enter 10 golf scores:
99 95 109 105 100 96 98 93 99 97 98
The scores read in are as follows:
99   95   109  105  100  96   98   93   99   97
Sum of scores = 991,average = 99.10
That's a handicap of 27.
*/
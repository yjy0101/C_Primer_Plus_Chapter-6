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
		scanf_s("%d", &score[index]);					//��ȡ10�����������浽�����Ӧ��Ԫ����
	}

	printf("The scores read in are as follows:\n");		//��ʱ�������е�ÿ��Ԫ�ض�������һ������

	for (index = 0; index < SIZE;index++)
	{
		printf("%-5d", score[index]);					//ͨ��������[�Ǳ�]����ȡ�������ж�Ӧ�Ǳ�Ԫ�ص�ֵ
	}													//��������ȡ��Ԫ���е�ֵ����ͨ��������[�Ǳ�]���ɣ�����Ҫʹ��ȡ��ַ��&

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
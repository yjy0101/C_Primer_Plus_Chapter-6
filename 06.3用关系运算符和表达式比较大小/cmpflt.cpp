/*cmpflt.c--�������Ƚ�*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value fo pi?\n");
	scanf_s("%lf", &response);
													//fabs()������ȡ����ֵ�ĺ���
	while (fabs(response - ANSWER) > 0.0001)		//fabs()����(������math.hͷ�ļ���)���Է���رȽϸ�����
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
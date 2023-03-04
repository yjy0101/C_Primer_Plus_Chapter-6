//power.c--��������������
#include<stdio.h>
double power(double n, int p);	//ANSI ����ԭ�� ������������
int main(void)
{
	double x, xpow;			//xΪ������xpowΪ������	
	int exp;				//expΪָ��

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");

	while (scanf_s("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);									//����power�����������غ����Ľ����xpow

		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}

	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)	//��������
{
	double pow = 1;
	int i;

	for (i = 1;i <= p;i++)
	{
		pow *= n;
	}
	
	return pow;					//����n��p���ݵĽ����������pow��ֵ
}

/*
Enter a number and the positive integer power to which
the number will be raised. Enter q to quit.
1.2 12
1.2 to the power 12 is 8.9161
Enter next pair of numbers or q to quit.
2 16
2 to the power 16 is 65536
Enter next pair of numbers or q to quit.
q
Hope you enjoyed this power trip -- bye!
*/
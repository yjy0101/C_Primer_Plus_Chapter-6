/*zeno.c--�����еĺ�*/
#include<stdio.h>
int main(void)
{
	int t_ct;
	double time, power_of_2;	//time��ʱ����ۼӺ�
	int limit;					//��������ǰ�������ʱ��

	printf("Enter the number of terms you want:");
	scanf_s("%d", &limit);
	
	for (time = 0, power_of_2 = 1, t_ct = 1;t_ct <= limit;t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}

	return 0;
}
/*
Enter the number of terms you want:15
time = 1.000000 when terms = 1.
time = 1.500000 when terms = 2.
time = 1.750000 when terms = 3.
time = 1.875000 when terms = 4.
time = 1.937500 when terms = 5.
time = 1.968750 when terms = 6.
time = 1.984375 when terms = 7.
time = 1.992188 when terms = 8.
time = 1.996094 when terms = 9.
time = 1.998047 when terms = 10.
time = 1.999023 when terms = 11.
time = 1.999512 when terms = 12.
time = 1.999756 when terms = 13.
time = 1.999878 when terms = 14.
time = 1.999939 when terms = 15.
*/
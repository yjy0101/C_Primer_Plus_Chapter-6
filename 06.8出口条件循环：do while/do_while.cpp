#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	
	do																	//ѭ�����е���䣬����ִ��һ�Σ���ִ�����жϣ�
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number:");
		scanf_s("%d", &code_entered);
	} while (code_entered != secret_code);								//���while�������Ҫ�зֺ�';'
	
	
	printf("Congratulations!\n");


	return 0;
}
/*
To enter the triskaidekaphobia therapy club,
please enter the secret code number:12
To enter the triskaidekaphobia therapy club,
please enter the secret code number:14
To enter the triskaidekaphobia therapy club,
please enter the secret code number:13
Congratulations!
*/
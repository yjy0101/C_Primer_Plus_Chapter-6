#include<stdio.h>
int main(void)
{
	const int NUMBER = 22;
	int count;

	//第一步：第一个表达式，进行初始化操作，并且只会执行一次；
	//第二步：第二个表达式，进行条件判断，如果为真则进入循环体执行，如果为假，跳出循环
	//第三步：第三个表达式，执行循环体中的语句
	//第四步：执行第三个表达式
	//第五步：执行完第四步后，再进行条件判断
	for (count = 1; count <= NUMBER; count++)
	{
		printf("Be my Valentine!\n");
	}

	return 0;
}
/*
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
*/
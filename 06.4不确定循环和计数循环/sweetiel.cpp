#include<stdio.h>
int main(void)
{
	const int NUMBER = 22;

	int count = 1;							//初始化一个计数器

	while (count <= NUMBER)					
	{
		printf("Be my Valentine!\n");		//行为
		count++;							//每次循环必须进行一次对计数器的递增或者递减
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
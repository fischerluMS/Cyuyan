#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//}

//int sum(int x , int y)//以函数形式求加法
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int add = sum(a , b);
//	printf("%d\n", add);
//	return 0;
//
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("是否好好写代码（1/0）");
//	scanf("%d", &input);
//	if (input == 1)
//	{ 
//		printf("好学生\n");
//		
//	}
//	else
//	{ 
//		printf("卖红薯\n");
//	}
//	return 0;
//}

int main()
{
	int input = 0;
	while (input < 30000)
	{
		printf("写代码:%d\n" ,input);
		input ++;
	}
	if (input == 30000)
	{
		printf("好工作\n");
	}
	
	return 0;
}

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

//int sum(int x , int y)//�Ժ�����ʽ��ӷ�
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
//	printf("�������\n");
//	printf("�Ƿ�ú�д���루1/0��");
//	scanf("%d", &input);
//	if (input == 1)
//	{ 
//		printf("��ѧ��\n");
//		
//	}
//	else
//	{ 
//		printf("������\n");
//	}
//	return 0;
//}

int main()
{
	int input = 0;
	while (input < 30000)
	{
		printf("д����:%d\n" ,input);
		input ++;
	}
	if (input == 30000)
	{
		printf("�ù���\n");
	}
	
	return 0;
}

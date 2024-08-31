#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i =  0 ;
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//
//	return 0;
//}


//#define ADD(X , Y) ((X)+(Y))
//
//int main()
//{
//	printf("sum=%d\n", 4*ADD(2 , 3));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//解引用操作符
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", ch);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
struct stu    //结构体创建一个学生
{
	char name[20];//成员变量
	int age;
	double score;
};
int main()
{
	struct stu s = { "张三",21,85.5 };//结构体的创建和初始化
	printf("1: name=%s age=%d score=%lf\n", s.name, s.age, s.score);
	struct stu* ps = &s;
	printf("2: name=%s age=%d score=%lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: name=%s age=%d score=%lf\n", ps->name, ps->age, ps->score);
	return 0;
}
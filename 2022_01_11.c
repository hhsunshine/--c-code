#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%p\n", &ch);
//	printf("%d\n", sizeof(pc));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//&a;//取地址
//	int* p = &a;//取地址
//	//有一种变量是用来存放地址的指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* --解引用操作
//	return 0;
//}

//#define MAX 100//define 定义标识符常量

//宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
////函数定义
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//static 修饰局部变量，局部变量的生命周期变长
//static 修饰全局变量,改变了变量的作用域，只能在源文件内部使用
//static 修饰函数，改变了函数的链接属性 外部链接属性---->内部链接属性

//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	register int a = 10;//register建议把a定义成寄存器变量
// struct -- 结构体关键字
// union -- 联合体/共用体
// typedef -- 类型定义-类型重定义
//typedef unsigned int u_int;
//unsigned int num = 20;
//u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;//局部变量-自动变量
//	return 0;
//}

//int add(int x, int y);
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[] --下标引用操作符
//	int a = 10;
//	int b = 20;
//	sum = add(a, b);//() -- 函数调用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	//真 -- 非0
//	//假 -- 0
//	//&& -- 逻辑与
//	//|| -- 逻辑或
//	int a = 1;
//	int b = 1;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//double--int强制转换
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++，在使用
//	//int b = a++;//后置++，先使用，再++
//	printf("a = %d b = %d",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32个bit位
//	int b = ~a;//~按位取反，b是有符号的整形
//	//~--按二进制位取反
//	//源码、补码、反码
//	//负数在内存中储存时，储存的是二进制补码
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算数组内元素个数
//	return 0;
//}
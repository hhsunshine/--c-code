#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//结构体
//char int double ....
//复杂对象--结构体--我们自己创造出来的一种类型

struct Book
{
	char name[20];//c语言程序设计
	short price;//20
};

int main()
{
	struct Book b1 = { "C语言程序设计",20 };
	strcpy(b1.name, "c++");//strcpy -字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	///*struct Book* pb = &b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", pb->price);*/
	//利用pb打印出书名和价格
	//.  结构体变量成员
	//-> 结构体指针成员
	///*printf("书名：%s\n", b1.name);
	//printf("price: %d\n", b1.price);
	//b1.price = 15;
	//printf("price: %d\n", b1.price);*/
	return 0;
}

//int main()
//{
//	double d = 3.14;
//	double* cp = &d;
//	*cp = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *cp);
//	printf("%d\n", sizeof(cp));
//	//int a = 10;//申请了4个字节空间
//	//printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;//解引用操作符/间接访问操作符
//	//printf("a = %d", a);
//	return 0;
//}
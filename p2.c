#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10个元素的数组
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//计算数组元素个数
	//个数 = 数组总大小/每个元素大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	//int a = 10;
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	return 0;
}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	//int a = 10;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//赋值
//	a = a + 10;
//	a += 10；
//		//复合赋值符
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//移位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节---23个bit位
//	int b = a << 1;
//	// b = a+1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	//char ch[10] = {};
//	return 0;
//}

//#include <string.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("good offer\n");
//	return 0;
//}

//#include <string.h>

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("good offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// ---\ddd 表示1~3个八进制的数字。如：\130x
//	// 	   /32--->表示ASCLL码代表的值
//	//---\xdd表示2个十六进制数字。如：\x30 0
//	printf("%c\n",'\32');
//	printf("%c\n", '\x61');
//	return 0;
//}


//int main()
//{
//	printf("abc\n");
//	printf("c:\\test\\32");
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	// --\t水平制表符
//	//---\\用于表示转译
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));//stelen - string length -计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//数据在计算机上存的是2进制
//	//a --- 97
//	//A --- 65
//	//ASCLL 编码
//	//ASCLL 码值
//	char arr1[] = "abc";//数组
//	//"abc"---'a','b','c','\0'---'\0'字符串结束标志
//	char arr2[] = {'a','b','c'};
//	char arr3[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//字符串类型
//int main()
//{
//	"hello";
//	"abcdef";
//	"";//空字符串
//	return 0;
//}

//4.枚举常量 --一一列举
//性别：
//三原色：
//星期：

//枚举关键字  -enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//};
//int main()
//{
//
//	return 0;
//}






////#define 定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}





//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//字面常量
//	const int num1 = 5;
//	//const 修饰的常变量不能修改
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以n是常变量
//	//int arr[n] = { 0 };
//		n = 20;
//		return 0;
//}










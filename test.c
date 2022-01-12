//包含一个stdio.h的文件
//std-标准 standard input output
//
//#include <stdio.h>
//int main()
//{
//	printf("哈喽\n");
//	return 0;
//
//}

//int main()//主函数-程序的入口-有且仅有一个
//{
//	printf("hello world\n");
//	return 0;
//}

//int 是整型的意思
//main 前面的int表示返回一个整型值
//int main（）
//{
//
//     return 0；//返回0
//}
//int main()//主函数-程序的入口-有且仅有一个
//{
//	//这里完成任务
//	//屏幕上输出hello world
//	//函数-print function -printf - 打印函数
//	//库函数-c语言提供给我们使用的函数
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'A'; //内存
//		printf("%c\n", ch);//--打印字符格式的数据
//	return 0;
//}

// %d
// %c
// %f
// %p 打印地址
// %x
// %o
//#include <stdio.h>
//{
	//int age = 20;
	// short int 短整型
	// long 长整型
	// 
	//printf("%d\n", age);//%d--打印整型十进制
	/*long num = 100;
	printf("%d\n", num);*/
	//float f = 4.0;
	//printf("%f\n", f);
	/*double d = 3.14;
	printf("%lf\n", d);*/
	//return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//
//#include <stdio.h>
//
//int num1 = 20;//全局变量--定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num2 = 10;//局部变量--定义在代码块（{}）内部的变量，
//	//建议局部变量和全局变量的名字不要相同，容易产生bug
//	//当局部变量和全局变量名字一样时，局部变量优先
//		printf("%d\n", num1);
//		return 0;
//}
#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);//取地址符&
	sum = num1 + num2;
	printf("sum = %d\n", sum);
		return 0;
}

//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，存放20
//	float weight = 73.4f;//向内存申请4个字节，存放小数
//	printf("%d\n%f\n", age, weight);
//	return 0;
//
//}







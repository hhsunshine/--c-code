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
//	//&a;//ȡ��ַ
//	int* p = &a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* --�����ò���
//	return 0;
//}

//#define MAX 100//define �����ʶ������

//��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
////��������
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
//	//������ʽ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//static ���ξֲ��������ֲ��������������ڱ䳤
//static ����ȫ�ֱ���,�ı��˱�����������ֻ����Դ�ļ��ڲ�ʹ��
//static ���κ������ı��˺������������� �ⲿ��������---->�ڲ���������

//�����ⲿ����
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
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
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
//	register int a = 10;//register�����a����ɼĴ�������
// struct -- �ṹ��ؼ���
// union -- ������/������
// typedef -- ���Ͷ���-�����ض���
//typedef unsigned int u_int;
//unsigned int num = 20;
//u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;//�ֲ�����-�Զ�����
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
//	arr[4];//[] --�±����ò�����
//	int a = 10;
//	int b = 20;
//	sum = add(a, b);//() -- �������ò�����
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
//	//�� -- ��0
//	//�� -- 0
//	//&& -- �߼���
//	//|| -- �߼���
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
//	int a = (int)3.14;//double--intǿ��ת��
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a++;//����++����ʹ�ã���++
//	printf("a = %d b = %d",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽڣ�32��bitλ
//	int b = ~a;//~��λȡ����b���з��ŵ�����
//	//~--��������λȡ��
//	//Դ�롢���롢����
//	//�������ڴ��д���ʱ��������Ƕ����Ʋ���
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
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//����������Ԫ�ظ���
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//10��Ԫ�ص�����
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//��������Ԫ�ظ���
	//���� = �����ܴ�С/ÿ��Ԫ�ش�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	//int a = 10;
	//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	return 0;
}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+˫Ŀ������
//	//int a = 10;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+���Ŷ���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//��ֵ
//	a = a + 10;
//	a += 10��
//		//���ϸ�ֵ��
//	return 0;
//}

//int main()
//{
//	//(2����)λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//��λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�---23��bitλ
//	int b = a << 1;
//	// b = a+1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10������������
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
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("good offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	// ---\ddd ��ʾ1~3���˽��Ƶ����֡��磺\130x
//	// 	   /32--->��ʾASCLL������ֵ
//	//---\xdd��ʾ2��ʮ���������֡��磺\x30 0
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
//	// --\tˮƽ�Ʊ��
//	//---\\���ڱ�ʾת��
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));//stelen - string length -�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//�����ڼ�����ϴ����2����
//	//a --- 97
//	//A --- 65
//	//ASCLL ����
//	//ASCLL ��ֵ
//	char arr1[] = "abc";//����
//	//"abc"---'a','b','c','\0'---'\0'�ַ���������־
//	char arr2[] = {'a','b','c'};
//	char arr3[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//�ַ�������
//int main()
//{
//	"hello";
//	"abcdef";
//	"";//���ַ���
//	return 0;
//}

//4.ö�ٳ��� --һһ�о�
//�Ա�
//��ԭɫ��
//���ڣ�

//ö�ٹؼ���  -enum

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






////#define ����ı�ʶ������
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
//	//���泣��
//	const int num1 = 5;
//	//const ���εĳ����������޸�
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n�Ǳ������������г����ԣ�����n�ǳ�����
//	//int arr[n] = { 0 };
//		n = 20;
//		return 0;
//}










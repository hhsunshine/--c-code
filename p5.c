#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ṹ��
//char int double ....
//���Ӷ���--�ṹ��--�����Լ����������һ������

struct Book
{
	char name[20];//c���Գ������
	short price;//20
};

int main()
{
	struct Book b1 = { "C���Գ������",20 };
	strcpy(b1.name, "c++");//strcpy -�ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);
	///*struct Book* pb = &b1;
	//printf("%s\n", (*pb).name);
	//printf("%d\n", pb->price);*/
	//����pb��ӡ�������ͼ۸�
	//.  �ṹ�������Ա
	//-> �ṹ��ָ���Ա
	///*printf("������%s\n", b1.name);
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
//	//int a = 10;//������4���ֽڿռ�
//	//printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;//�����ò�����/��ӷ��ʲ�����
//	//printf("a = %d", a);
//	return 0;
//}
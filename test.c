//����һ��stdio.h���ļ�
//std-��׼ standard input output
//
//#include <stdio.h>
//int main()
//{
//	printf("���\n");
//	return 0;
//
//}

//int main()//������-��������-���ҽ���һ��
//{
//	printf("hello world\n");
//	return 0;
//}

//int �����͵���˼
//main ǰ���int��ʾ����һ������ֵ
//int main����
//{
//
//     return 0��//����0
//}
//int main()//������-��������-���ҽ���һ��
//{
//	//�����������
//	//��Ļ�����hello world
//	//����-print function -printf - ��ӡ����
//	//�⺯��-c�����ṩ������ʹ�õĺ���
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'A'; //�ڴ�
//		printf("%c\n", ch);//--��ӡ�ַ���ʽ������
//	return 0;
//}

// %d
// %c
// %f
// %p ��ӡ��ַ
// %x
// %o
//#include <stdio.h>
//{
	//int age = 20;
	// short int ������
	// long ������
	// 
	//printf("%d\n", age);//%d--��ӡ����ʮ����
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
//int num1 = 20;//ȫ�ֱ���--�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num2 = 10;//�ֲ�����--�����ڴ���飨{}���ڲ��ı�����
//	//����ֲ�������ȫ�ֱ��������ֲ�Ҫ��ͬ�����ײ���bug
//	//���ֲ�������ȫ�ֱ�������һ��ʱ���ֲ���������
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
	scanf("%d%d", &num1, &num2);//ȡ��ַ��&
	sum = num1 + num2;
	printf("sum = %d\n", sum);
		return 0;
}

//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ�����20
//	float weight = 73.4f;//���ڴ�����4���ֽڣ����С��
//	printf("%d\n%f\n", age, weight);
//	return 0;
//
//}







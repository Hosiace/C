//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
/*#include <stdio.h>
#include<string.h>
int main()
{
	printf("%c\n", '\x61');
	return 0;
}*/
//#include<stdio.h>
//
//
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf_s("%d", & input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("�ؼ�������\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//			line++;
//	}
//	if (line >= 20000)
//	printf("��offer\n");
//	return 0;
//}
//#include<stdio.h>
// int Add(int x, int y)
//{
//	 int z = x + y;
//	 return z;
//
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//
//}
//#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10-���������ֵ�����
//	//char cn[20];//����һ�����20���ַ�������
//	//float   arr2[5];//����һ�����5��������������
//
//	//printf("%d\n", arr[4]);//�����±�������֣��±��0��ʼ��һ����n���������±�Ϊn-1
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//		
//
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h> 
//int main()
//{
//	int a = 5 % 2;//����ط�ȡģ��ȡģ����ȡ����
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n",b);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}
//a=a+10; ��a+=10 ��������ȫ�ȼۣ�ͬ��a= a-20 ��a-=20 ��ȫ�ȼۡ���������ͬ��&=��^=,|=,<<=,>>=
//һ�е�0��ʾ�٣�һ�еķ�0��ʾ��
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//���ߵȼۣ�sizeof��������ſ��Բ��ü�
//	printf("%d\n", sizeof a);//����д�ַ���ʱ����Բ��ü����ţ�дint��ʱ����Ҫ������
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//
//	printf("%d\n",sizeof arr);
//	//���������Ԫ�ظ���
//	//����=����Ĵ�С����ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;

#include<stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20;
	if (num1 > num2)
		printf("�ϴ�ֵ�ǣ�%d", num1);
	else
		printf("�ϴ�ֵ�ǣ�%d", num2);

	return 0;

}
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
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//	scanf_s("%d", & input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("回家卖红薯\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//			line++;
//	}
//	if (line >= 20000)
//	printf("好offer\n");
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10-个整形数字的数组
//	//char cn[20];//定义一个存放20个字符的数组
//	//float   arr2[5];//定义一个存放5个浮点数的数组
//
//	//printf("%d\n", arr[4]);//根据下标查找数字，下表从0开始，一共有n个，最大的下标为n-1
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
//	int a = 5 % 2;//这个地方取模，取模就是取余数
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
//a=a+10; 和a+=10 ；两者完全等价，同理，a= a-20 和a-=20 完全等价。。。。。同理&=，^=,|=,<<=,>>=
//一切的0表示假，一切的非0表示真
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

//sizeof 计算的是变量/类型所占空间的大小，单位是字节
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//两者等价，sizeof后面的括号可以不用加
//	printf("%d\n", sizeof a);//当你写字符的时候可以不用加括号，写int的时候需要加括号
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
//	//计算数组的元素个数
//	//个数=数组的大小除以每个元素的大小
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
		printf("较大值是：%d", num1);
	else
		printf("较大值是：%d", num2);

	return 0;

}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	char arr[] = "abcdef";
//	/*printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr+1));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr+1));*/
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 1));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p = a[0];
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}*/
//	printf("%d", p[0]);
//	return 0;
//}

////逆序输出字符串
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	char temp = arr[0];
//
//	int len= my_strlen(arr) - 1;
//	arr[0] = arr[len];
//
//	arr[len] = '\0';
//
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	arr[len] = temp;
//}
//int main()
//{
//	char arr[100] = "";
//	printf("shuru:");
//	gets(arr);//读取一行的值（包括空格）
//	//scanf("%s", &arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}	

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是数字
//例如：1+11+111+1111+11111
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入初始数字和要计算的项数：");
//	scanf("%d%d", &a, &n); 
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for ( i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印1-10 0000之间的自幂数（一个n位数之和等于它本身）
//例如：153=1^3+5^3+3^3

//1.确定数字n的位数i
// n=123，i=3
//2.确定n中各个元素的i次方之和sum
// sum=1^i+2^i+3^i
// 3.比较数字n与sum是否相等，相等则为自幂数

//void weishu(int n)
//{	
//	for (n = 0; n < 100000; n++)
//	{
//		//i不放进循环就会导致：当n是两位数时，位数i会累积上次算的值
//		//例如：n=10算出i=2，当n=11时，i=4
//		//sum同理，例如：n=1算出sum=1，n=2算出sum=3
//		int i = 1;//n是个位数不进入第一个循环而直接带入1在第二个循环中计算
//		int sum = 0;
//		//1
//		int temp = n;
//		while (temp /= 10)
//		{
//			i++;
//		}
//		//2
//		temp = n;//少了这步会导致：temp在上个while为0，之后的计算全为0
//		while (temp)
//		{
//			sum += (int)pow(temp % 10, i);
//			temp /= 10;
//		}
//		//3
//		if (n == sum)
//		{
//			printf("%d\n", n);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	weishu(n);
//	return 0;
//}

//输出菱形图案
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************   
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//void print_down(int line_half)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line_half - 1; i++)
//	{
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *
//		for (j = 0; j < 2 * (line_half -1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//void print_up(int line_half)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line_half; i++)
//	{
//		//打印空格
//		for (j = 0; j < line_half - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line_half = 0;
//	printf("输入上半部分的行数(奇数):");
//	scanf("%d", &line_half);
//	print_up(line_half);
//	print_down(line_half);
//	return 0;
//}

////喝汽水问题
////1瓶汽水1元。2个空瓶可以换1瓶汽水，给20元，可以买多少汽水
//int main()
//{
//	int money = 0;
//	int soda = 0;
//	printf("input:");
//	scanf("%d" ,&money);
//	if (money < 0)
//	{
//		printf("soda=0\n");
//	}
//	else
//	{
//		printf("soda=%d\n", 2 * money - 1);
//	}
//	return 0;
//}
////int main()
////{
////	int money = 0;
////	int soda = 0;
////	int soda1 = 0;
////	int bottle = 0;
////	for ( money = 1; money <= 20; money++)
////	{
////		soda++;
////		bottle++;
////	}
////	while (soda1 = bottle / 2)
////	{
////		bottle = soda1 + bottle % 2;
////		soda += soda1;
////	}
////	printf("%d\n", soda);
////	return 0;
////}

//调整奇数偶数顺序，使数组奇数放在偶数之前
//void print_arr(int arr[], int length)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void swap(int arr[], int length)
//{
//	int left = 0;
//	int right = length - 1;
//	while (left < right)
//	{
//		//
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换奇偶数
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
// int main()
//{
//	int arr[] = { 2,54,3,5,1,46,0,34,72,5,43,11,63 };
//	int length = sizeof(arr) / sizeof(arr[0]); 
//	swap(arr, length);
//	print_arr(arr, length);
//	/*int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	for (i = 0; i < length; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}*/
//	return 0;
//}

//实现一个函数，可以做选字符串中k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD右旋一个字符得到CDBA
void turn_left(char arr[], int k,int len)
{
	char temp = arr[0];
	arr[0] = arr[1];
	if (k >= 1)
	{
		k--;
		turn_left(arr + 1, k, len);
	}
	arr[len - 1] = arr[0];
}
int main()
{
	char arr[] = "";
	int k = 1;
	int len = strlen(arr);
	printf("请输入字符和要旋转的数字:");
	gets(arr);
	turn_left(arr, k,len);
	printf("%s ", arr);
	return 0;
}
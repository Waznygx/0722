#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
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

////��������ַ���
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
//	gets(arr);//��ȡһ�е�ֵ�������ո�
//	//scanf("%s", &arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}	

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a������
//���磺1+11+111+1111+11111
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("�������ʼ���ֺ�Ҫ�����������");
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

//��ӡ1-10 0000֮�����������һ��nλ��֮�͵���������
//���磺153=1^3+5^3+3^3

//1.ȷ������n��λ��i
// n=123��i=3
//2.ȷ��n�и���Ԫ�ص�i�η�֮��sum
// sum=1^i+2^i+3^i
// 3.�Ƚ�����n��sum�Ƿ���ȣ������Ϊ������

//void weishu(int n)
//{	
//	for (n = 0; n < 100000; n++)
//	{
//		//i���Ž�ѭ���ͻᵼ�£���n����λ��ʱ��λ��i���ۻ��ϴ����ֵ
//		//���磺n=10���i=2����n=11ʱ��i=4
//		//sumͬ�����磺n=1���sum=1��n=2���sum=3
//		int i = 1;//n�Ǹ�λ���������һ��ѭ����ֱ�Ӵ���1�ڵڶ���ѭ���м���
//		int sum = 0;
//		//1
//		int temp = n;
//		while (temp /= 10)
//		{
//			i++;
//		}
//		//2
//		temp = n;//�����ⲽ�ᵼ�£�temp���ϸ�whileΪ0��֮��ļ���ȫΪ0
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

////�������ͼ��
////      *
////     ***
////    *****
////   *******
////  *********
//// ***********
////*************   
//// ***********
////  *********
////   *******
////    *****
////     ***
////      *
void print_down(int line_half)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < line_half - 1; i++)
	{
		//��ӡ�ո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ *
		for (j = 0; j < 2 * (line_half -1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void print_up(int line_half)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < line_half; i++)
	{
		//��ӡ�ո�
		for (j = 0; j < line_half - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ *
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int line_half = 0;
	printf("�����ϰ벿�ֵ�����(����):");
	scanf("%d", &line_half);
	print_up(line_half);
	print_down(line_half);
	return 0;
}
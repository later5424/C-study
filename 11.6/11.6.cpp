#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double amount = 0;
	double price = 0;
	printf("请输入票面：");
	scanf("%lf", &amount);
	printf("请输入金额: ");
	scanf("%lf", &price);
	double change = amount - price;
	printf("找您%f元。\n", change);
	
	return 0;
}
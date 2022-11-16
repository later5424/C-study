#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int price = 0;
	printf("请输入价格: %d");
	scanf("%d", &price);
	int change = 100 - price;
	printf("最终价格%d", change);
	return 0;
}
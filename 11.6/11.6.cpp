#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double amount = 0;
	double price = 0;
	printf("������Ʊ�棺");
	scanf("%lf", &amount);
	printf("��������: ");
	scanf("%lf", &price);
	double change = amount - price;
	printf("����%fԪ��\n", change);
	
	return 0;
}
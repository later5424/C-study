#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int price = 0;
	int bill = 0;
	printf("??????????:");
	scanf("%d", &price);
	printf("??????Ʊ??:");
	scanf("%d", &bill);
	
	if(bill >= price)
	{
		printf("Ӧ??????: %d\n", bill - price); 
	}
	
	else
	{
		printf("????Ǯ???? \n"); 
	}

	return 0;
}
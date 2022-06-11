#include<stdio.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
//	double amount = x * (1+0.033 * 3);
	printf("%f",amount);
	
}

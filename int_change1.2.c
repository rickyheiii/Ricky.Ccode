#include<stdio.h>
int main(void)
{
	const int amount = 100;
	int price = 0;

	//f是格式化的意思
	printf("请输入金额（元） :");
	scanf("%d",&price);

	printf("请输入你的票面");
	scanf("%d", &amount);

	int change = amount - price;

	printf("找零%d元.\n",change);

	return 0;
}

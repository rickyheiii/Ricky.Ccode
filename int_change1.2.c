#include<stdio.h>
int main(void)
{
	const int amount = 100;
	int price = 0;

	//f�Ǹ�ʽ������˼
	printf("�������Ԫ�� :");
	scanf("%d",&price);

	printf("���������Ʊ��");
	scanf("%d", &amount);

	int change = amount - price;

	printf("����%dԪ.\n",change);

	return 0;
}

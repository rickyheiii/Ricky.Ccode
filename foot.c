#include<stdio.h>
int main(void)
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��:\n");

	double foot;
	double inch;

	scanf("%lf %lf" , &foot , &inch);

	printf("�����%f��.\n", ((foot + inch / 12)*0.3048));
	
	
	double d1 = 1.222;
	int num = d1;
	
	printf("num = %d",num);
	return 0;
}

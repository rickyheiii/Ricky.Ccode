#include<stdio.h>
int main(void)
{
	printf("请分别输入身高的英尺和英寸:\n");

	double foot;
	double inch;

	scanf("%lf %lf" , &foot , &inch);

	printf("身高是%f米.\n", ((foot + inch / 12)*0.3048));
	
	
	double d1 = 1.222;
	int num = d1;
	
	printf("num = %d",num);
	return 0;
}

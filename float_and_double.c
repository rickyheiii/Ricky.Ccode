#include<stdio.h>
int main(void)
{
	//??????
	//浮点数常量默认为double型，声明float型常量时，须后加f或F。
	float d1 = 1.1; //从double到float截断

	float d2 = 1.1f; //1.1f就是float
	
	double d3 = 1.3;
	
	//%f 默认保留6位  
	printf("%f %f %f",d1,d2,d3);
	return 0;
}

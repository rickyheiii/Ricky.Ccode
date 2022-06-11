#include<stdio.h>
#define ADJUST 7.31
int main(void)

{
	//const 修饰的数据类型是指常类型，常类型的变量或对象的值是不能被更新的。
	const double SCALE = 0.333;//变量
	double shoe ,foot;
	
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("shoe size (men's)");
	printf("%10.1f %15.2f inches\n",shoe , foot);
	
	return 0;
}

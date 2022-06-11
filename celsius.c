//编写一个摄氏度转换相应华氏摄氏度
#include<stdio.h>
int main(void)
{
	//分别打印两种温度的数值转换
	float fahr ,celsius; //变量
	int lower , upper,step; //常量

	lower = 0; //最低下限
	upper = 300;//最高上限
	step = 20;//步长
	printf(" celsius fahr\n");

	fahr = lower;
	while(celsius <= upper ){
		fahr = (9.0 * celsius) / 5.0 + 32.0;
		//d前面加上数字表示占用几个字符宽
		printf("%3.0f\t %6.1f\n",celsius,fahr);
		celsius = celsius + step;
	}


	return 0;
}

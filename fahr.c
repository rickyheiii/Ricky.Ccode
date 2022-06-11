#include<stdio.h>
int main(void)
{
	//分别打印两种温度的数值转换
	int fahr ,celsius;
	int lower , upper,step;

	lower = 0; //最低下限
	upper = 300;//最高上限
	step = 20;//步长

	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32)/9;
		//d前面加上数字表示占用几个字符宽
		printf("%5d\t %10d\n",fahr,celsius);
		fahr = fahr + step;
	}
	
	
	return 0;
}

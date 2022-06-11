#include<stdio.h>
//说明
//const 是一个关键字，规定好的，表示后面定义了一个常量
//pl是常量名，即是一个常量，常量值就是3.14
//pl因为是常量，因此不可以修改
//const定义常量是，需要加分号
const double PI = 3.14;
int main(void)
{
	double area;
	double r = 1.2;
	area = PI*r*r;
	printf("面积:%2f",area);
	
	return 0;
}

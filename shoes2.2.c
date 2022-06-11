#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's) foot length\n");
	shoe = 3.0;
	while(shoe < 18.5){
		//TODO
		//inches Ó¢³ßµÄÒâË¼
		foot = SCALE * shoe + ADJUST;
		printf("%10.lf %15.2f inches\n",shoe,foot);
		shoe = shoe + 1;
}
	printf("If the shoe fits, wear it.\n");
	return 0;
}

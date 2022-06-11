#include<stdio.h>
#define SQUARES 64
int main(void)
{
	const double CRQP = 2E16;
	double current, total;
	int count = 1;
	
	printf("square     grains     total     ");
	printf("fraction of \n");
	printf("           added      grains");
	printf("world total\n");
	total  = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CRQP);
	while(count < SQUARES){
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %12.2e %12.2e %12.2e\n",count , current,total,total / CRQP);
	}
	printf("That's all.\n");
	
	return 0;
	
}

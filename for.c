#include<stdio.h>
int main(void)
{
	//´òÓ¡»ªÊÏÎÂ¶È- selsius¶ÔÕÕ±í
	int fahr = 0;
	
//	for(int fahr=300;fahr>=0;fahr=fahr-20)ÄæĞò
	for(int fahr=0;fahr<=300;fahr=fahr+20){//Ë³Ğò
		printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
		
	}
	return 0;
}

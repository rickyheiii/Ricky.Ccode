#include<stdio.h>
#define ADJUST 7.31
int main(void)

{
	//const ���ε�����������ָ�����ͣ������͵ı���������ֵ�ǲ��ܱ����µġ�
	const double SCALE = 0.333;//����
	double shoe ,foot;
	
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("shoe size (men's)");
	printf("%10.1f %15.2f inches\n",shoe , foot);
	
	return 0;
}

#include<stdio.h>
int main(void)
{
	//??????
	//����������Ĭ��Ϊdouble�ͣ�����float�ͳ���ʱ������f��F��
	float d1 = 1.1; //��double��float�ض�

	float d2 = 1.1f; //1.1f����float
	
	double d3 = 1.3;
	
	//%f Ĭ�ϱ���6λ  
	printf("%f %f %f",d1,d2,d3);
	return 0;
}

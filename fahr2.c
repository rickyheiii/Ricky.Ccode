#include<stdio.h>
int main(void)
{
	//�ֱ��ӡ�����¶ȵ���ֵת��
	float fahr ,celsius;
	int lower , upper,step;
	
	lower = 0; //�������
	upper = 300;//�������
	step = 20;//����
	printf("     celsius\n");
	
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		//dǰ��������ֱ�ʾռ�ü����ַ���
		printf("%3.0f\t %6.1f\n",fahr,celsius);
		fahr = fahr + step;
	}
	
	
	return 0;
}

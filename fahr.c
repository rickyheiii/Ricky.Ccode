#include<stdio.h>
int main(void)
{
	//�ֱ��ӡ�����¶ȵ���ֵת��
	int fahr ,celsius;
	int lower , upper,step;

	lower = 0; //�������
	upper = 300;//�������
	step = 20;//����

	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32)/9;
		//dǰ��������ֱ�ʾռ�ü����ַ���
		printf("%5d\t %10d\n",fahr,celsius);
		fahr = fahr + step;
	}
	
	
	return 0;
}

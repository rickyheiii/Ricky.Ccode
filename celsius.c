//��дһ�����϶�ת����Ӧ�������϶�
#include<stdio.h>
int main(void)
{
	//�ֱ��ӡ�����¶ȵ���ֵת��
	float fahr ,celsius; //����
	int lower , upper,step; //����

	lower = 0; //�������
	upper = 300;//�������
	step = 20;//����
	printf(" celsius fahr\n");

	fahr = lower;
	while(celsius <= upper ){
		fahr = (9.0 * celsius) / 5.0 + 32.0;
		//dǰ��������ֱ�ʾռ�ü����ַ���
		printf("%3.0f\t %6.1f\n",celsius,fahr);
		celsius = celsius + step;
	}


	return 0;
}
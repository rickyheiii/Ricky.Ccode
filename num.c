#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d", &a,&b);
	//��Ϊ����2.0��������Ҫ��double���Ͷ�����int
	double c = (a+b)/2.0;
	
	//�����ڽ�β��C������Ҫ��%f����ʾdouble��
	printf("%d��%d��ƽ��ֵ = %f\n", a,b,c);
	
	return 0;


}
//���ʼ�ҵķ����ô��ˣ��Ҳ�Ӧ�ðѱ�������ֱ�ӷ���printf���棬Ӧ�ú�����һ������һ�������Ŷԡ�

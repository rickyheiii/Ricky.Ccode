#include<stdio.h>
int main(void)
{
	//��ȡһ��num�ĵ�ַ������ʾ���ն�
	int a1 = 123;
	
	//��num�ĵ�ַ��ֵ��ptr����ͨ��ptrȥ�޸�num��ֵ
	int* ptr = &a1;
	//������仰����ȡ����ַ��ֵ�����޸�
	*ptr = 122;
	
	//���
	printf("a1�ĵ�ַ��%p",&a1);
	printf("\nptr�ĵ�ַ��%p\nptr��ָ��%p\nptr��Ӧ��ֵ%d",&ptr,ptr,*ptr);
	printf("\na1��ֵ��%d",a1);
	
	
	

	return 0;
	
	
}

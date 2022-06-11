#include<stdio.h>
int main(void)
{
	//获取一个num的地址，并显示到终端
	int a1 = 123;
	
	//将num的地址赋值给ptr，并通过ptr去修改num的值
	int* ptr = &a1;
	//下面这句话是提取他地址的值进行修改
	*ptr = 122;
	
	//输出
	printf("a1的地址是%p",&a1);
	printf("\nptr的地址是%p\nptr的指向%p\nptr对应的值%d",&ptr,ptr,*ptr);
	printf("\na1的值是%d",a1);
	
	
	

	return 0;
	
	
}

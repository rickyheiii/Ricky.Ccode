//讲解指针入门
#include<stdio.h>
int main(void)
{
	int num = 1;
	
	//定义一个指针变量，指针
	//1.int* 表示为 指针类型（执行一个int类型指针）
	//2.名称为 ptr，ptr就是一个int*的类型
	//3.ptr指向了一个int类型的变量的地址
	int* ptr = &num;
	 
	
	
	//num的地址是多少
	//1.如果要输出一个变量的地址，使用格式是%p
	//2.&num 表示取出num这个变量对应地址
	printf("num 的值 = %d \nnum 地址=%p",num,&num);
	
	//1.指针变量，本身也有地址
	//2.指针变量，存放的地址ptr
	//3.获取指针指向的值*ptr
	printf("\nptr的地址%p\nptr存放的值是一个地址为%p\nptr指向的值=%d",&ptr,ptr,*ptr);
	
	return 0;
}

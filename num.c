#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d", &a,&b);
	//因为除于2.0所以我们要用double类型而不是int
	double c = (a+b)/2.0;
	
	//所以在结尾的C中我们要用%f来表示double；
	printf("%d和%d的平均值 = %f\n", a,b,c);
	
	return 0;


}
//在最开始我的方法用错了，我不应该把变量运算直接放在printf里面，应该和上面一样定义一个变量才对。

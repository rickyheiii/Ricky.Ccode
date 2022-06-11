#include<stdio.h>
int main(void)
{
	char name[10] = "张三";
	short age = 23;
	float score = 78.5f;
	char gender = 'M';
	char hobby [20] = "篮球，足球";
	
	printf("name\t年龄\t成绩\t性别\t爱好\n");
	printf("%s\t%d\t%.2f\t%c\t%s",name,age,score,gender,hobby);
	
	return 0;
}

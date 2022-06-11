#include<stdio.h>
int main(void)
{
	//demo01
	char name[10] = "Ricky";
	int year = 21;
	float grades = 90;
	char sex[5]= "man";
	char hobby[10]="running";
	
	printf("姓名\t年龄\t成绩\t性别\t爱好\n");
	printf("%s\t%d\t%.2f\t%s\t%s",name,year,grades,sex,hobby);
	
	
	return 0;
}

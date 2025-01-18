#include<stdio.h>
struct student
{
	char fullname;
	float averages;
};

int main()
{
	struct student std[1000];
	int i,n,a;
	float b;
	printf("Can you enter student number:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Student Name:\n");
		scanf("%s",&std[i].fullname);
		printf("Student Avarage:");
		scanf("%f",&std[i].averages);
	
	if(std[i].averages<10)
{
	a=1;
	std[i].averages=std[i].averages+a;
}
else if(std[i].averages>10 && std[i].averages<15)
{
	b=0.5;
	std[i].averages=std[i].averages+b;
}
}
for(i=0;i<n;i++)
{
	printf("Student Name: %c \n", std[i].fullname);
	printf("New Student Average: %f\n", std[i].averages);
}
}

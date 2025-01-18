#include<stdio.h>
int main()
{
	int n,a,b,c,max;
	printf("Can you enter 3 numbers for the ffind maximun number among the three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("Maximum number is %d", max);
}

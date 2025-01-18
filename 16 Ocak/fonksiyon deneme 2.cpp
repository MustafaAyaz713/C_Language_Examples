#include<stdio.h>
int mat(int a, int b)
{
	int x,y,z,d;
	
	x=a*b;
	y=a/b;
	z=a+b;
	d=a-b;
}
int main()
{
	int a,b;
	
	printf("Can you enter number:\n");
	scanf("%d%d",&a,&b);
	mat(a,b);
	
}

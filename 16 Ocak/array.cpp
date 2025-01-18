#include<stdio.h>
int main()
{
	int bir,iki,i,j,k,l,e,r,t,y;
	int sum=0;
	printf("Can you enter size of array width:\n");
	scanf("%d",&bir);
	printf("Can you enter size of array lenght:\n");
	scanf("%d",&iki);
	int b[bir][iki],a[bir][iki];
	
	for(i=0;i<bir;i++)
	{
		for(j=0;j<iki;j++)
		{
		printf("Can you enter a[%d][%d] :", i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}
	for(e=0;e<bir;e++)
	{ 
		for(r=0;r<iki;r++)
		{
		printf("%d ", a[e][r]);
		}
		printf("\n");
	}
	
	
	printf("Can you enter size of array width:\n");
	scanf("%d",&bir);
	printf("Can you enter size of array lenght:\n");
	scanf("%d",&iki);
	
	for(k=0;k<bir;k++)
	{
		for(l=0;l<iki;l++)
		{
			printf("Can you enter array b[%d][%d]:", k+1,l+1);
			scanf("%d",&b[k][l]);
		}
	}
		for(t=0;t<bir;t++)
	{
		for(y=0;y<iki;y++)
		{
			printf(" %d",b[t][y]);
			
		}
		printf("\n");
	}
	
	

}

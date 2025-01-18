#include<stdio.h>
int main()
{
	int i,j,k,l,a,b;
	
	printf("Can you enter array width:\n");
	scanf("%d",&a);
	printf("Can you enter array lenght:\n");
	scanf("%d",&b);
	int M[a][b], A[a][b];
	int toplam=0;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Array [%d][%d] = ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Array [%d][%d] = ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			toplam=M[i][j]+A[i][j];
			printf(" %d ",toplam);
			
		}
		printf("\n");	
		toplam=0;
	}
	
}

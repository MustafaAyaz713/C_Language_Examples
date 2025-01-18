#include<stdio.h>
int main()
{
	int a[20],b,c,n,m,sum=0;
	int *pointer;
	
	
	printf("Can you enter size of array:");
	scanf("%d",&n);
	for(b=0;b<n;b++)
	{
		pointer=&a[b];
		printf("Can you enter a number for the size adress your numbers in RAM:\n");
		scanf("%d",&a[b]);
		
		printf("%d\n",&a[b]);
	sum+=pointer;
		
	}
	
	printf("%d",sum);
}




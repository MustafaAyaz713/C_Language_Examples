#include<stdio.h>
int main()
{
	int i,j,n;
	int array[1000];
	
	printf("Can you enter size of array for the find the largest number among the array:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number: %d: ", i+1);
		scanf("%d", &array[i]);
		
	}
	
	for(i=1;i<n;i++)
	{
		if(array[0]<array[i])
		{
			array[0]=array[i];
		}
	}
	printf("The largest number among the array is %d", array[0]);
	
}

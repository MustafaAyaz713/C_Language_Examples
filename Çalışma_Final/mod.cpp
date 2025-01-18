#include<stdio.h>
int main()
{
	int i,n,bir,iki,uc;
	 printf("Can you enter a Number for the see number step bt step:\n");
	 scanf("%d",&n);
	 
	bir=n/100;
	printf("Yuzler basamagi: %d\n", bir); 
	
	iki=n/10;
	iki=iki%10;
	printf("Onlar basamagi: %d\n", iki);
	
	uc=n%10;
	printf("Birler basamagi: %d\n", uc);
	
	
}

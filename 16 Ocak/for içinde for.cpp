#include<stdio.h>
int main()
{
	int a,b,en,boy;
	
	
	printf("Uzunluk giriniz:\n");
	scanf("%d",&boy);
	printf("Genislik giriniz:\n");
	scanf("%d",&en);
	
	for(a=1;a<=boy;a++)
	{
		for(b=1;b<=en;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}

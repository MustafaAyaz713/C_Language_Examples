#include<stdio.h>

void futbol(int  a)
{
	
	if(a==1)
	{
		printf("Besiktas");
	}
	else if(a==2)
	{
		printf("Galatasaray");
	}
	else if(a==3)
	{
		printf("Fenerbahce");
	}
}
int main()
{
	int n;
	printf("Takim Rengi Giriniz (Siyah Beyaz=1 Sari Kirmizi=2 Sari Lacivert=3) \n");
	scanf("%d",&n);
 	futbol(n);
	
}

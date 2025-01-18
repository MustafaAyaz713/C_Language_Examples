#include<stdio.h>
void tekcift(int mustafa)
{
	if(mustafa%2== 0)
	{
		printf("Sayi Ciftir.");
	}
	else
	{
		printf("Sayý Tektir:");
		
	}
}
int faktoriyel(int mustafa)
{
	int fakt=1,i;
	
	for(i=1;i<=mustafa;i++)
	{	
	   fakt=fakt*i;
	}
	return fakt;
	
}
float pi(int mustafa)
{
	float a=3.14;
	mustafa=mustafa*a;
}
int main()
{
	int sayi,op=0;
	
	printf("Bir sayi giriniz:\n");
	scanf("%d",&sayi);
	
	printf("\n1.Teklik Ciftlik Bulma\n2.Sayinin Faktoriyelini Bulma\n3.Sayinin Pi Sayisi ile Carpimi\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			tekcift(sayi);
			break;
		case 2:
			printf("%d",faktoriyel(sayi));
			break;
		case 3:
			printf("%2f",pi(sayi));
			break;
		default:
			printf("Gecersiz Bir Ýslem Yapildi.");
			break;
			
	}
}

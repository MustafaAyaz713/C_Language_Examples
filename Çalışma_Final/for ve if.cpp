#include<stdio.h>
struct toplam
{
	int toplama;
};
int main()
{
	struct toplam std[1000];
	int i,n,bol;
	int sum=0;
	
	printf("Kac deger gireceginizi yaziniz:\n");
	scanf("%d",&n);
	
	printf("Toplanacak degerleri girin:\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&std[i].toplama);
	sum+=std[i].toplama;
	}
	
	if(sum>=50)
	{
		bol=sum/n;
		printf("Ogrenci Dersten Gecebilir = %d", bol);
	}
	else
	{
		bol=sum/n;
		printf("Ogrenci Dersten Kalýr= %d", bol);
	}

}

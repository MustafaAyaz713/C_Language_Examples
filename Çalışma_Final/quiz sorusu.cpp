#include<stdio.h>
#include<math.h>
struct kordinat1
{
	int x;
	int y;
	
};
struct kordinat2
{
	int x;
	int y;
};
int main()
{
	struct kordinat1 kor1;
	struct kordinat2 kor2;
	int a,b,sonuc;
	
	 printf("Ilk kordinat noktalarini giriniz: \n");
	 scanf("%d%d",&kor1.x,&kor1.y);
	  printf("Ikinci kordinat noktalarini giriniz: \n");
	  scanf("%d%d",&kor2.x,&kor2.y);
	
	sonuc=sqrt(((kor1.x-kor2.x)*(kor1.x-kor2.x))+((kor1.y-kor2.y)*(kor1.y-kor2.y)));
	printf("Aradaki Uzaklik: %d", sonuc);
	 
}



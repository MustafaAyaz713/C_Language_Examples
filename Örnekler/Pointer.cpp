#include <stdio.h>

int main()
{
    int a,b,toplam;
    int *pointer1,*pointer2;
    printf("Ikitane say� girin: ");
    scanf("%d%d",&a,&b);
    pointer1=&a;
    pointer2=&b;
    
    printf("Birinci Say�: %d \n",pointer1);
    printf("Ikinci Say�: %d \n" ,pointer2);
    toplam=*pointer1+*pointer2;
    printf("Toplam = %d",toplam);
}


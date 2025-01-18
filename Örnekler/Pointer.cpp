#include <stdio.h>

int main()
{
    int a,b,toplam;
    int *pointer1,*pointer2;
    printf("Ikitane sayý girin: ");
    scanf("%d%d",&a,&b);
    pointer1=&a;
    pointer2=&b;
    
    printf("Birinci Sayý: %d \n",pointer1);
    printf("Ikinci Sayý: %d \n" ,pointer2);
    toplam=*pointer1+*pointer2;
    printf("Toplam = %d",toplam);
}


#include <stdio.h>
int point (int a,int b)
{
    int toplam;
    int *pointer1,*pointer2;
    int c,d;
    c=&pointer1;
    d=&pointer2;
    pointer1=&a;
    pointer2=&b;
    printf("Birinci Sayý: %d \n",pointer1);
    printf("Ikinci Sayý: %d \n" ,pointer2);
    toplam=c+d;
    printf("Toplam = %d", toplam);
}
int main()
{
    int x,y;
    
    
    printf("Iki sayý girin: \n");
    scanf("%d %d",&x,&y);
    point(x,y);
    

}


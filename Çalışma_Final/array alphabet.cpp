#include <stdio.h>
void sesli(char b)
{
   
    int a[10]={'a','e','i','u','o','A','E','Ý','U','O'};
    
  if(b== a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9])
  {
      printf("%c sesli harf",b);
  }
else
{
	printf("%c sesli harf degil",b);
}
    
}
int main ( ) {
    char x;
printf("bir harf gir: ");
    scanf("%c",&x);
    sesli(x);
}

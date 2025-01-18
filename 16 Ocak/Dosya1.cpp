include<stdio.h>
int main()
{
char i;
FILE *slayt;
slayt= fopen("karakteryaz.txt","w");
do
{
i=getc(slayt);
printf("%c",i);
}while(i!=EOF);
fclose(slayt);
}

#include<stdio.h>
int main()
{
	int num;
	 FILE *deneme1;
	 deneme1 = fopen ("deneme1.txt","w");
	 printf("Can you enter number");
	 scanf("%d",&num);
	 fprintf(deneme1,"You entered that number in c programm %d", num);
	 fclose(deneme1);
}

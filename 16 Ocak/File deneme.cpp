#include<stdio.h>
int main()
{
	FILE *deneme;
	deneme = fopen("C:/Users/musta/OneDrive/Masaüstü/deneme.txt","w");
	fputs("Deneme yapiyorum ama ins calisiyodur", deneme);
	fclose(deneme);
}

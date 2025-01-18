#include<stdio.h>
int main()
{
	float sonuc,a,b;
	char op;
	FILE *HesapMakinesi;
	HesapMakinesi = fopen("HesapMakinesi.txt","w");
	printf("Can you choose the operation(-,+,*,/):\n");
	scanf("%c",&op);
	printf("Can You Enter Two Number:\n");
	scanf("%f%f",&a,&b);
	
	switch(op)
	{
		case '-':
			sonuc=a-b;
			printf("Result= %f", sonuc);
			break;
		case '+':
			sonuc=a+b;
			printf("Result= %f", sonuc);
			break;
		case '*':
			sonuc=a*b;
			printf("Result= %f", sonuc);
			break;
		case '/':
			sonuc=a/b;
			printf("Result= %f", sonuc);
			break;
		default:
			printf("You Entered wrong operation.");
			break;
		
	}
fprintf(HesapMakinesi,"Ýlk Sayý %f Ýkinci Sayý %f\n",a,b);
fprintf(HesapMakinesi,"Ýslem : %c\n",op);
fprintf(HesapMakinesi,"Sonuc=%f",sonuc);
 fclose(HesapMakinesi);
 //ByMstf and Patastafa and Audience Ayþemi...
}

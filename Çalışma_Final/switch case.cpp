#include<stdio.h>
int main()
{
	int i,a,b,islem,sonuc;
	printf("Can you Enter Two Numbers:\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<6;i++)
	{
	printf("Can you enter operation like +,-,*,/ \n");
	scanf("%s",&islem);
switch(islem)
	{
	
		case '+':
		sonuc=a+b;
		printf("Sum of two numbers that you entred is %d\n", sonuc);
		break;
		case '-':
		sonuc=a-b;
		printf("Sum of two numbers that you entred is %d\n", sonuc);
		break;
		case '*':
		sonuc=a*b;
		printf("Sum of two numbers that you entred is %d\n", sonuc);
		break;
		case '/' :
		sonuc=a/b;
		printf("Sum of two numbers that you entred is %d\n", sonuc);
		break;
		default : printf("You entered void something\n");
		break;
	}
}

}

	
	
	


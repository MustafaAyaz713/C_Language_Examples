#include<stdio.h>

struct patient
{
	char name[50];
	char surname[50];
	int weight;
	int lenght;
};
int OB(int W, int L)
{
	int R;
	R = W/L;
	if(R>10)
	{
		printf("Ratio is not ideal, pleas contact a doctor");
	}
	if(R<10)
	{
		printf("Ratio is not ideal, please contact a doctor");
	}
	else
	{
		printf("Your raito is ideal");
	}
	
	
}
int main()
{
	struct patient ptd[20];
	int i,n,R;
	char ch;
	FILE *deneme;
	deneme=fopen("C:/Users/musta/OneDrive/Masa�st�/deneme.txt","w");
	printf("We are going to see all this information in text file.\n");
	
	printf("Can you enter size of array: \n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Please enter the patient name: \n");
		scanf("%s",&ptd[i].name);
		printf("Please enter the patient surname: \n");
		scanf("%s",&ptd[i].surname);
		printf("Please enter the patient weight: \n");
		scanf("%d",&ptd[i].weight);
		printf("Please enter the patient lenght: \n");
		scanf("%d", &ptd[i].lenght);
		OB(ptd[i].weight,ptd[i].lenght);
		printf("\n");
	}
	fclose(deneme);

}



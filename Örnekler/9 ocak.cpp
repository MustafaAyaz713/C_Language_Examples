#include<stdio.h>
 struct sinif
 {
 	char name;
 	char surname;
 	int snumber;
 	char sex;
 };
 int dev(int G, int B)
 {
     
    if(G%B==0)
 	{
 		printf("School is protecting \n");
	 }
 	
 }
 int main()
 {
 	struct sinif mlk[1000];
 	int i,n,G,B;
 	printf("Enter Student Number in the class: ");
 	scanf("%d",&n);
 	for(i=0;i<n; i++)
 	{
 		printf("Name:\n");
 		scanf("%s",&mlk[i].name);
 		printf("Surname:\n");
 		scanf("%s",&mlk[i].surname);
 		printf("School Number:\n");
 		scanf("%d",&mlk[i].snumber);
 		printf("Sex(G or B):\n");
 		scanf("%s",&mlk[i].sex);
 		dev(mlk[i].sex,mlk[i].sex);
	 }
 }

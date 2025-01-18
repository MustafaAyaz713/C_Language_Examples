#include<stdio.h>

 struct year
 {
 	int todayday;
 	int todaymonth;
 	int todayyear;
 	int birthday;
 	int birthmonth;
 	int birthyear;
 };
 struct age
 {
 	int ageday;
 	int agemonth;
 	int ageyear;
 };
 int main()
 {
 	struct year y;
 	struct age a;
 	int i,j;
 	
 	printf("Can you enter today date like day-month-year:\n");
 	scanf("%d%d%d",&y.todayday,&y.todaymonth,&y.todayyear);
 	printf("Can you enter your birth date like day-month-year:\n");
 	scanf("%d%d%d",&y.birthday,&y.birthmonth,&y.birthyear);
 	
 	a.ageday=y.todayday-y.birthday;
 	a.agemonth=y.todaymonth-y.birthmonth;
 	a.ageyear=y.todayyear-y.birthyear;
 	
 	if(a.ageday<0)
 	{
 		a.ageday=a.ageday+30;
	 }
	 if(a.agemonth<0)
	 {
	 	int x=12;
	 	int y=1;
	 	a.agemonth=a.agemonth+x;
	 	a.ageyear=a.ageyear-y;
	 }
	 printf("Your Age is %d year %d month %d days.", a.ageyear,a.agemonth,a.ageday);
 }

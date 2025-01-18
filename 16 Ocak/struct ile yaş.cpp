#include<stdio.h>
int main()
{
	struct year
	{
		int todaymonth;
		int todayyear;
		int todayday;
		int birthday;
		int birthyear;
		int birthmonth;
	};
	struct age
	{
		int ageday;
		int agemonth;
		int ageyear;
	};
	struct age age;
	struct year yr;
	printf("Enter the date of today(day month year): ");
	scanf("%d %d %d",&yr.todayday,&yr.todaymonth,&yr.todayyear);
	printf("Enter the birth date(day month year):");
	scanf("%d %d %d",&yr.birthday,&yr.birthmonth,&yr.birthyear);
	
	age.ageday=yr.todayday-yr.birthday;
	age.agemonth=yr.todaymonth-yr.birthmonth;
	age.ageyear=yr.todayyear-yr.birthyear;
	
	if(age.ageday<0)
	{
		age.ageday=age.ageday+30;
	}
	if(age.agemonth<0)
	{
	    int b=12;
	    int a=1;
		yr.todaymonth=yr.todaymonth+b;
		age.agemonth=yr.todaymonth-yr.birthmonth;
		age.ageyear=age.ageyear-a;
	}
	
	printf("this human is %d days, %d months, %d years old.",age.ageday,age.agemonth,age.ageyear);
	
}

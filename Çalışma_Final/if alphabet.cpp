#include<stdio.h>
void sesli(char b)
{
     if(b=='a'||b=='e'||b=='i'||b=='u'||b=='o' ||b== 'A'||b=='E'||b=='Ý'||b=='U'||b=='O')
    {
	printf("%c is vowel",b);
	}
	else
	{
		printf("%c is not vowel",b);
	}
	
}
int main()
{
	char d;
    printf("Can you enter a number for see this number in alphabet or not:\n");
    scanf("%c",&d);
    sesli(d);
    
   
}

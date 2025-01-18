#include <stdio.h>
int main()
{
	int m,n,p;
	n = 3; m =n+1;
	{
		int n, p;
		p = m+7;
		n = 4;
		printf("(1) m=%i, n=%i et p=%i\n",m,n,p);
	}
printf("(2) m=%i, n=%i, et p=%i \n",m,n,p);	
}


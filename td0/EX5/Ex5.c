#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,m,s,h;
	
	scanf("%d",&x);
	m=x/60;
	s=x%60;
	h=m/60;
	m=m%60;
	
	printf( "%d Heures %d minute %d seconde /n",h,m,s);
	
	
	
	
	
	exit(0);
	}

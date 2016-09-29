#include <stdio.h>
#include <stdlib.h>

int main()
{
int a ,i ,test,b;
b=0;

scanf("%d",&a);
i=2;
while (i-1!= a && test==0)
	{
		
		
		if((a%i)==0){b = 1; test=1;}
		
		i++;
		
		}

if (b==1){printf("vrai");}
else printf("faux");
exit(0);
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,t,z;
	z=0;
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf (" %d *%d ",x,y);
	while (x!=1)
	{
		if (x%2==0)
			{
					x=x/2;
					y=2*y;
			}
	
		else 
			{
				x=(x-1);
				z=y+z;
				
			}
			printf("= %d * %d + %d \n",x,y,z);
	}
	t=x*y+z;
	printf("%d \n",t);
exit(0);
}

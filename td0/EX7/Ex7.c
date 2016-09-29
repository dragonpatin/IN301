#include <stdio.h>
#include <stdlib.h>

int main()
{

float i;
float S;
i=1;

while(((1/((i+1)*(i+1))+S)-S)>0.0001)
{
	
	S=1/(i*i)+S;
	i++;
	
	}
printf("%f",S);
exit(0);
}

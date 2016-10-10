#include "stdio.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])

{
	int a=atoi(argv[1]);
	printf("%d\n",a);
	if(a<0 || a>100 || a!=a)
		a=100;
	for(int i=0; i<a;i++)
		if(i%5==0 && i%3==0)printf("FizzBuzz\n");
		else if(i%3==0)printf("Fizz\n");
		else if(i%5==0)printf("Buzz\n");	
		else printf("%d\n",i);
	return 0;
}

#include "header.h"

int f(int a,int b)
{
	int c;
	while(b!=0)
	{
	c=a%b;
	a=b;
	b=c;
	}
	return a;
}

#include <stdio.h>

int sum(int x, int y)
{
	return(x +y);
}

int subt(int x, int y)
{
	return(x - y);
}

int mult(int x, int y)
{
	return(x *y);
}

int div(int x, int y)
{
	return(x / y);
}

int mod(int x, int y)
{	
	if (x != 0)
	{
		return(x % y);
	}
	else
	{
		return(0);
	}
}



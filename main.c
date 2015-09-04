#include<stdio.h>
/*
	this is hello world 
	author pengxing

*/

int div(int a, int b)
{
	if(b == 0) return 0;
	return a / b;
}

void sub(int a, int b)
{
	return a - b;
}

void add(int a, int b)
{
	return a + b;
}

int main()
{
	printf("Version 0.1");
	/*
		delete printf, because it is not writen on ver2 branch
	*/
	return 0;
}

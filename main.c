#include<stdio.h>
/*
	this is hello world 
	author pengxing

*/

/*
	change return type
*/
int div(int a, int b)
{
	if(b == 0) return 0;
	return a / b;
}

int mul(int a , int b)
{
	return  a * b;
}

int sub(int a, int b)
{
	return a - b;
}

int add(int a, int b)
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

#include<stdio.h>

int DivInt(int a, int b,int x, int c,int* divide, int* rest)
{
	x = a / b;
	c = a%b;
	divide[0] = x;
	rest[0] = c;
	return 1;
}

int main()
{
	int x = 50;
	int y = 45;
	int a = 0;
	int b = 0;
	int divide[5] = { 0, };
	int rest[5] = { 0, };

	DivInt(x, y,a,b, divide, rest);
	
	printf("%d %d", divide[0], rest[0]);
	system("pause");
	return 0;
}

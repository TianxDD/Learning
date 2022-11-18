#include<stdio.h>
void f();
int main()
{	
	int a,b;
	scanf("%d %d",&a,&b);
	f(a,b);
	
	return 0;
} 
void f(double x,double y)
{
	int c;
	c = y;
	y = x;
	x = c;
	printf("%d %d", x, y);
	
}

#include<stdio.h>
void fun(void);


int main()
{
	fun();
	fun();
	fun();
	fun();
	return 0;
}
void fun(void)
{
     static int x=5,y=100;
	printf("%d %d \n",x,y);
	x++;
	y++;
}

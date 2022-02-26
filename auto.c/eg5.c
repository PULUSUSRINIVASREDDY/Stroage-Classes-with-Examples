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
	int x=5;
	auto y=10;
	printf("\n %d %d\n ",x,y);
}



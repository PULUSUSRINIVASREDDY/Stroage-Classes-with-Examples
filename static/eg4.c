#include<stdio.h>
void fun(int n);
int main()
{
	int i,n;
	printf("enter the values\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)

		fun();
	return 0;
}
void fun (int n)
{
	static int step;
	step=step+n;
	printf("%d",n);
}

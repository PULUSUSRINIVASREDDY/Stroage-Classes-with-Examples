#include<stdio.h>
int main()
{
	int a=10;
	{
		auto int b=20;
		{
			auto int c=30;
			printf("%d\n",c);
		}
		printf("%d\n",b);
	}
	printf("%d\n",a);
//	printf("%d\n",a);

	return 0;
}

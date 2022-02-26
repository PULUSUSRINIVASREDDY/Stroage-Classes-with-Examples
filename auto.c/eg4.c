#include<stdio.h>
int main()
{
	auto int a=10;
	{
		{
			int c=30;
			int i;

			for(i=0;i<3;i++)
			{
				printf("%d\n",c);
			}
		auto int b=30;
		printf("%d\n",b);
		}
	}
	printf("%d\n",a);
	
}


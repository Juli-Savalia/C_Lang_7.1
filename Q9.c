#include<stdio.h>

void main()
{
	int i,j,k=2;
	char ch='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
				{
					printf("%c",ch++);
				}
				else
				{
					printf("%d",k++);
				}
			}
			else
			{
				if(j%2==0)
				{
					printf("%d",k++);
				}
				else
				{
					printf("%c",ch++);
				}
			}
		}
		printf("\n");
	}
}

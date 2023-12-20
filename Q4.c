//1 2 3 4 5
//2 3 4 5
//3 4 5
//4 5
//5

#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)//i=1 ; 1<=5 ; 1+1=2
	{
		for(j=i;j<=5;j++){//i=j=2 ; 2<=5 2+1=3
			
			printf("%d ",j);
			
		}
		printf("\n");
	}
	
}		

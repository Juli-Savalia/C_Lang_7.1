//5
//4 4 
//3 3 3
//2 2 2 2
//1 1 1 1 1

#include<stdio.h>

void main(){
	
	int i,j;
	
	for(i=5;i>=1;i--)//i=5 5>=1 5-1=4
	{
		for(j=i;j<=5;j++)//j=i=4 4<=5 4+1=5
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	
}

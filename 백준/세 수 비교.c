#include<stdio.h>

int main()
{
	int A,B,C;
	
	scanf("%d %d %d",&A,&B,&C); 
	
	if(A > B && A > C)
	{
		if(B > C)
			printf("%d",B);
		else
			printf("%d",C);	
	}
	
	else if(B > A && B > C)
	{
		if(A > C)
			printf("%d",A);
		else
			printf("%d",C);
	}
	else
	{
		if(A > B)
			printf("%d",A);
		else
			printf("%d",B);
	}
	
	return 0;
}

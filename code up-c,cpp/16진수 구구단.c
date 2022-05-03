#include<stdio.h>

int main()
{
	int i;
	char c;
	
	scanf("%c",&c);
	for(i = 1; i <= 15;i++)
		printf("%c*%X=%X\n",c,i,(c-55)*i);
	
	return 0;
}

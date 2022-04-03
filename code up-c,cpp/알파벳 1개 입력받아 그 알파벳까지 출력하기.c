#include<stdio.h>

int main()
{
	char x;
	char t = 'a';
	
	scanf("%c", &x);
	if (x == 'a')
		printf("a");

	else {
		do
		{
			printf("%c\n", t);
			++t;
		} while (x != t);
		printf("%c",x);
	}

     return 0;
}


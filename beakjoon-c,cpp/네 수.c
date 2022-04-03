#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s1[20],s2[20],s3[20],s4[20];
	long long int num1,num2;
	
	scanf("%s %s %s %s",s1,s2,s3,s4);
	strcat(s1,s2);
	strcat(s3,s4);
	
	num1 = atoll(s1);
	num2 = atoll(s3);
	printf("%lld",num1+num2);
	return 0;
}

#include<stdio.h>

int main()
{
	unsigned long long int w,h,b;
	double num;
	scanf("%llu %llu %llu",&w,&h,&b);
	num=w*h*b;
	printf("%.2f MB",num/8/1024/1024);
	
	return 0;
}

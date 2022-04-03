#include<stdio.h>

int main()
{
	unsigned long long h,b,c,s;
	double num; 
	scanf("%llu %llu %llu %llu",&h,&b,&c,&s);
	num=h*b*c*s;
	printf("%.1f MB",(num/8/1024)/1024);
}

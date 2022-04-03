#include<stdio.h>

int main()
{
	int h,m,c;
	scanf("%d %d",&h,&m);
	scanf("%d",&c);
	
	h += c/60;
	m += c%60;
	
	if(m >= 60)
	{
		h += 1;
		m -= 60;
	}
	if(h >= 24)
	{
		h -= 24;
	}
	
	printf("%d %d",h,m);
	return 0;
}

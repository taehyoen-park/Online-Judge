#include<stdio.h>

int main()
{
	long long int a,m,d,n,i,num,x=0;
	scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
	num=a*m+d;
	for(i=3;i<=n;i++){
	num=num*m+d;
	}
	if(n==1)
	printf("%d",a);
	
	else if(n==2)
	printf("%d",a*m+d);
	
	else
	printf("%lld",num);
	
	return 0;
}

#include<stdio.h>

int main()
{
	long long int a,b,c;
	long long int n=0;
	scanf("%lld %lld %lld",&a,&b,&c);
    if(b>=c){
    printf("%d",-1);
    }
    else
    {
        n=a/(c-b)+1;
       	printf("%lld\n",n);
    }
	return 0;
}

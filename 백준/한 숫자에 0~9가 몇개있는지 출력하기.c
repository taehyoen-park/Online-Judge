#include<stdio.h>

int x[10];
int y[10];

int main()
{
	int num,i,a,b,c,j,v=0;
	
	scanf("%d %d %d",&a,&b,&c);
	num=(a*b)*c;
	
	for(i=0;i<10;++i){
	x[i]=num%10;
	num=num/10;
	v++;
	if(num==0)
	break;
	}
	for(i=0;i<v;++i){	
	for(j=0;j<10;++j){
	if(x[i]==j)
	y[j]++;
	}	
}
	
     for(i=0;i<10;++i)
	printf("%d\n",y[i]);  
	
	return 0;
}

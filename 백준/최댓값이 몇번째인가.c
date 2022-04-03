#include<stdio.h>

int main(){
	int a[9];
    int x=0,b=0;
    int i;
    
    for(i=0;i<9;++i)
	scanf("%d",&a[i]);
	
	for(i=0;i<9;++i)
	if(x<a[i])
	{
		x=a[i];
		b=i;
	}
	
    printf("%d\n%d",x,b+1);
    return 0;
}


#include<stdio.h>

int main()
{
    int n,i,x,a;
    scanf("%d %d\n",&n,&x);
    for(i=0;i<n;i++){
    scanf("%d",&a);	
	if(x>a)
    printf("%d ",a);
    	}
        return 0;
}

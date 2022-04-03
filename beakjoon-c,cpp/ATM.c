#include<stdio.h>

int main()
{
	int n,i,k,j,x=0;
	int t[1000];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	
	for(i=0;i<n;i++){
	for(j=i;j<n;j++){	
	if(t[i]>t[j]){
	k=t[i];
	t[i]=t[j];
	t[j]=k;
	  }
	}
}
	for(i=0;i<n;++i)
	x+=t[i]*(n-i);
	
	printf("%d",x);
	
	
	return 0;
}

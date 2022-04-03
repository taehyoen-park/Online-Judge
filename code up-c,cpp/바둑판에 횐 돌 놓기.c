#include<stdio.h>

int main()
{
	int a[20][20]={0};
	int i,j,x,y,n;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	scanf("%d %d",&x,&y);
	a[x][y]=1;
	}
	for(i=1;i<20;i++){
		for(j=1;j<20;j++){
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}		
	return 0;
} 

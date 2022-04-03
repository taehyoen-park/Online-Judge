#include<stdio.h>

int main()
{
	int j,k,i,x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++) 
			for(k=0;k<z;k++)
			printf("%d %d %d\n",i,j,k);
	}
	printf("%d",i*j*k);
	
	return 0;
}

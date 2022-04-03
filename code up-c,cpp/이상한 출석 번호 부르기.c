#include<stdio.h>

int main()
{
	int a[10000];
	int b[23];
	int n,j,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		for(j=0;j<23;j++){
		if(a[i]==j+1){
		b[j]++;
		continue;
			}
		}	
	}
	for(i=0;i<23;i++)
	printf("%d ",b[i]);
	
	return 0;
}

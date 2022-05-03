#include<stdio.h>

int main()
{
	int l,n,x,y,d;
	int arr[101][101];
	int i,j,w,h;
	
	scanf("%d %d",&h,&w);
	for(i = 0; i < h; i++)
		for(j = 0; j < w; j++)
			arr[i][j] = 0;
			
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d %d",&l,&d,&x,&y);
		x -= 1,y -= 1;
		for(j = 0; j < l; j++)
		{
			if(d == 0)
			{
				arr[x][y] = 1;
				y += 1;
			}
			else
			{
				arr[x][y] = 1;
				x += 1;
			}
		}
	}
	
	for(i = 0; i < h; i++)
	{
		for(j = 0; j < w; j++)
			printf("%d ",arr[i][j]);
		printf("\n");		
	}
	return 0;
}

#include<stdio.h>

void push_heap(int arr[],int size,int x)
{
	int root,c,temp;
	arr[size] = x;
	
	
	if(!size)
		return;
		
	c = size;
	root = (c-1) / 2;
	do{
		if(arr[root] < arr[c])
		{
			temp = arr[c];
			arr[c] = arr[root];
			arr[root] = temp;
		}
		c = root;
		root = (c-1) / 2;
	}while(arr[root] < arr[c] && size > 0);
}

void deletenode(int arr[],int size)
{
	int i,c,root,temp;
	printf("%d\n",arr[0]);
	
	root = 0;
	do{
		c = root * 2 + 1;
		if(arr[c] < arr[c+1] && c+1 <= size)
			c++;
		if(c <= size)
		{
			arr[root] = arr[c];
			root = c;
		}
	}while(c <= size);
	
	arr[root] = arr[size];
	c = root;
	root = (root-1) / 2;
	while(arr[root] < arr[c])
	{
		temp = arr[c];
		arr[c] = arr[root];
		arr[root] = temp;
		c = root;
		root = (c-1) / 2;
	}
	arr[size] = 0;
}

int main()
{
	int arr[200000];
	int i,n,k;
	int size = -1;
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&k);
		if(k == 0)
		{
			if(size >= 0)
			{
				deletenode(arr,size);
				size--;
			}
			else
				printf("%d\n",arr[0]);
		}
		
		else
		{
			size++;
			push_heap(arr,size,k);
		}	
	}
	return 0;
}

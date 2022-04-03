#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define number 1000

struct PERSON{
	int age;
	char name[101];
};

struct PERSON *list[number];

void merge(struct PERSON *arr[], int a, int mid, int b)
{
	int i = a,k = a,t;
	int j = mid + 1;
	int temp;
	
	while(i <= mid && j <= b)
	{
		if((*arr[i]).age <= (*arr[j]).age)
		{
			list[k] = arr[i];
			i++;
		}
		else
		{
			list[k] = arr[j];
			j++;
		}
		k++;
	}
	
	if(i > mid)
	{
		for(t = j; t <= b; t++)
		{
			list[k] = arr[t];
			k++; 	
		}	
	}
	else
	{
		for(t = i; t <= mid; t++)
		{
			list[k] = arr[t];
			k++;
		}
	}
	
	for(t = a; t <= b; t++)
	{
		arr[t] = list[t];
	}
}

void mergesort(struct PERSON *arr[], int a, int b)
{
	if(a < b)
	{
		int mid = (a+b) / 2;
		mergesort(arr, a, mid);
		mergesort(arr, mid+1, b);
		merge(arr, a, mid, b);
	}
}

int main()
{
	struct PERSON person[number];
	struct PERSON *ptr[number];
	struct PERSON *temp = malloc(sizeof(struct PERSON));
	int i,j,n;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d %s",&person[i].age, &person[i].name);
	}
	
	for(i=0; i<n; i++)
	{
		ptr[i] = &person[i];
	}
	
	mergesort(ptr,0,n-1);
	
	for(i=0; i<n; i++)
	{
		printf("%d %s\n",(ptr[i])->age, (ptr[i])->name);
	}
	
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#define MAX_STACK_SIZE 10000

int stack[MAX_STACK_SIZE];
int cursor = -1;

void push(int input)
{
	if(cursor >= MAX_STACK_SIZE)
		return;
	else
	{
		stack[++cursor] = input;
	}
	
}

void pop()
{
	if(cursor >= 0)
		cursor--;
	else
		return;
}


int main()
{
	int n,i,input;
	int sum = 0;

	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&input);
		if(input == 0)
			pop();
		
		else
			push(input);
	}
	
	if(cursor == -1)
		printf("0");
		
	else
	{
		for(i=0; i<=cursor; i++)
		{
			sum+=stack[i];
		}
		printf("%d",sum);	
	}
    return 0;
}

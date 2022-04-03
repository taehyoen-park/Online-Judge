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
		stack[++cursor] = input;
}

void pop()
{
	if(cursor >= 0)
	{
		printf("%d\n",stack[cursor]);
		stack[--cursor];
	}
	else
		printf("-1\n");
}

void size()
{
	printf("%d\n",cursor+1);
}

void top()
{
	if(cursor < 0)
		printf("-1\n");
	else
		printf("%d\n",stack[cursor]);
}

void empty()
{
	if(cursor < 0)
		printf("1\n");
	else
		printf("0\n");
}

int main()
{
	int n,i;
	int input;
	char order[6];

	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%s",order);
		if(strcmp(order, "push")==0)
		{
			scanf("%d", &input);
			push(input);
		}
		
		else if(strcmp(order, "pop")==0)
		{				
			pop();
		}
		else if(strcmp(order, "size")==0)
		{
			size();
		}
		else if(strcmp(order, "top")==0)
		{
			top();
		}
		else if(strcmp(order, "empty")==0)
		{
			empty();
		}
	}

    return 0;
}

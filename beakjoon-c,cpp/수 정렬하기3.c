#include<stdio.h>
#define count 10000

int main()
{
	int i,j,n;
	int num[count] = {0,};
	int num2,k;
    
	scanf("%d",&n);
    k = n;

    for(i = 0; ; i++)
	{
		scanf("%d",&num2);
        num[num2 - 1]++;
        n--;
        if(n == 0)
            break;
	}
    
	for(i = 0; i < count; i++)
	{
		if(num[i] != 0)
		{
			for(j = 0; j < num[i]; j++)
			{
				printf("%d\n",i + 1);
			}
		}
	}
	return 0;
}

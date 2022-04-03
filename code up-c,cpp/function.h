
int arrmax(int *x,int n)
{//배열에 최댓값을 반환하는 함수. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	return *(x+n-1);
}

int arrmin(int *x,int n)
{//배열에 최솟값을 반환하는 함수. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	return *x;
}

void swap(int *a, int *b)
{//두 변수에 값을 서로 바꾸는 함수. 
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int maxnumber(int *x,int n)
{//배열에서 가장 큰 값이 몇번째인지 반환하는  함수. 
	int i, a=0;
	long long int b=-2000000000;
	
	for (i = 0; i < n; ++i)
	{
		if (b < *(x+i))
		{
			b=*(x+i);
			a = i;
		}
	}
	return a+1;
}

int minnumber(int *x,int n)
{//배열에서 가장 작은 값이 몇번째인지 반환하는 함수. 
	int i, a=0;
	long long int b=2000000000;
	
	for (i = 0; i < n; ++i)
	{
		if (b > *(x+i))
		{
			b=*(x+i);
			a = i;
		}
	}
	return a+1;
}

void arrdress(int *x,int n)
{//배열을 정렬을 해주고 출력은 하지않는다. 
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
}

void arrdress2(int *x,int n)
{//배열을 정렬을 해주고 출력을 해준다. 
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(x + i) > *(x + j))
			{
				k = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = k;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ",*(x+i));
}

























#include<stdio.h>

//n�� ���� ����
//m�� ����Ǵ� Ƚ�� 
//k�� �������� ���ϴ� Ƚ�� 

int main()
{
	int n,m,k,i,j,l;
	int a,num,sum = 0,end;
	int arr[100000];
	scanf("%d %d %d", &n, &m, &k);
	
	for(i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	} 		
	
	for(i = 0; i < i*k; i++){
		scanf("%d %d %d",&a,&num,&end);
		if(a == 1)
		{
			sum -= arr[num-1]; 
			arr[num-1] = end;
			sum += arr[num-1]; 
		}
		else if(a == 2)
		{
			for(l = num-1; l < end;l++)
			{
				sum += arr[l];
			}
		}
		printf("%d",sum);
		sum = 0;
	}
	
	return 0;
}

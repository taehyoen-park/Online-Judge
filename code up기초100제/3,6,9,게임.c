#include<stdio.h>

int main() 
{
	int n,i,c='X';
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%10==3||i%10==6||i%10==9||i==3||i==6||i==9){
			printf("%c ",c);
			continue;
		}	
			else if(i/10>=3&&i/10<4){
				printf("%c ",c);
				break;
				}
				else if(i/10>=6&&i/10<6){
					printf("%c ",c);
					break;
					}
					else if(i/10>=9&&i/10<10){
						printf("%c ",c);
						break;
						}
							else
							printf("%d ",i); 
						
		
	}
	return 0;
}

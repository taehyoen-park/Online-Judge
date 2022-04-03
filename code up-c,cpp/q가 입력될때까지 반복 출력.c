#include<stdio.h>

int main()
{
    char y='a';
   
   	while(y!='q'){
    	scanf("%c",&y);
    	printf("%c",y);
    		if(y=='q')
    			break;
    }		
     return 0;
}

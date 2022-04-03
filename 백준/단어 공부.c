#include<stdio.h>

int main()
{
    char str[1000000];
    int i,num[26] ={ 0 },max = 0;

    scanf("%s",str);//문자열 입력 

	//아스키코드를 사용하여 알파벳을 사전순으로 배열에 넣는다. 
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] > 90)
            num[str[i]-97]++;//소문자일 경우 
        else
            num[str[i]-65]++;//대문자일 경우 
    }

	//num의 인덱스 값중 가장 큰 값의 인덱스를  max에 넣는다. 
    for(i = 0;i < 26;i++)
    {
        if(num[i] > num[max])
            max = i;
    }
    
    //max를 사용하여 겹치는게 있는지 확인한다. 
    for(i = 0;i < 26;i++)
    {
        if(num[i] == num[max] && i != max)
        {
            printf("?");
            return 0;
    	}
    }
    
    printf("%c",max+65);

    return 0;

}

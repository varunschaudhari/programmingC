#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char str[50];
	int i,result=0,cnt=0,bin[50];
	
	printf("Enter String : ");
	scanf("%s",str);
	//gets(str);
	puts(str);
	int len=strlen(str);
	printf("lenght : %d\n",len);
	for(i=0;str[i]!='\0';i++)
	{	
		switch(str[i])
		{
			case '1':bin[i]=1;break;
			case '0':bin[i]=0;break;
			default:printf("Wrong Input\n");
					return 0;
		
		}
	}	
	for(i=0;i<len;i++)
	{
		printf("%d",bin[i]);
	}
	printf("\n");
	for(i=len-1;i>=0;i--)
	{
		result=result+(bin[i]*pow(2,cnt));
		cnt++;
	}
	printf("Result : %d\n",result);
}

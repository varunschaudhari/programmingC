#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j,k,count=0;
	printf("Enter String : ");
	//scanf("%s",str);
	gets(str);
	puts(str);
	int len=strlen(str);
	printf("lenght : %d\n",len);
	
	for(i=len-1;i>=0;i--)
	{
		count++;
		if(str[i]==32||i==0)
		{
			
			for(j=0,k=i;j<=count;j++,k++)
			{
				printf("%c",str[k]);
			}
			count=0;
			printf(" ");	
		
		}
		
	}
	

}

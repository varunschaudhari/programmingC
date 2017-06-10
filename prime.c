#include<stdio.h>
int main()
{
	int n,cnt=2;
	printf("Enter Number : ");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		cnt++;	
		if(n%i==0)
		{
			printf("it is Not prime\n");
			return 0;
		}
	
	}
	if(n==cnt)
	{
		printf("Prime\n");
	}
	
}

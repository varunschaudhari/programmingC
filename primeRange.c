#include<stdio.h>
int main()
{
	int i,j,n,m,cnt=2;;
	printf("Enter First : ");
	scanf("%d",&n);
	printf("Enter Second : ");
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
		if(i==1)
		{
			//printf("No : 1 is Not prime\n");
		}

		if(i==2)
		{
			printf("No : 2 is prime\n");
		}
		
		for(j=2;j<i;j++)
		{
			
			if(i%j!=0 &&(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0))
			{
				printf("No : %d is prime\n",i);	break;
			}	
			cnt++;
		}
	/*	if(i==2)
		{
			printf("No : 2 is prime\n");
		}
		if(i==j)
		{
			printf("No : %d is prime\n",i);
		}*/
	}
}

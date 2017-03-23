#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[14];
	char A[7][9]={"   XX   ","  XXXX  "," XX  XX ","XX    XX","XXXXXXXX","XX    XX","XX    XX"};
	char B[7][9]={"XXXXXXX ","XX    XX","XX    XX","XXXXXXX ","XX    XX","XX    XX","XXXXXXX "};
	char C[7][9]={"   XXXXX"," XX     ","XX      ","XX      ","XX      "," XX     ","   XXXXX"};
	char D[7][9]={"XXXXXX  ","XX   XX ","XX     X","XX     X","XX     X","XX   XX ","XXXXXX  "};
	char E[7][9]={"XXXXXXXX","XX      ","XX      ","XXXXXXXX","XX      ","XX      ","XXXXXXXX"};
	char F[7][9]={"XXXXXXXX","XX      ","XX      ","XXXXXXXX","XX      ","XX      ","XX      "};
	char G[7][9]={"  XXXXX "," XX   XX","XX      ","XX      ","XX   XXX"," XX   XX","  XXXXX "};
	char H[7][9]={"XX    XX","XX    XX","XX    XX","XXXXXXXX","XX    XX","XX    XX","XX    XX"};
	char I[7][9]={"XXXXXXXX","   XX   ","   XX   ","   XX   ","   XX   ","   XX   ","XXXXXXXX"};
	char J[7][9]={" XXXXXXX","     XX ","     XX ","     XX ","     XX ","XX   XX ","  XXXX  "};
	char K[7][9]={"XX    XX","XX   XX ","XX XX   ","XXX     ","XX XX   ","XX   XX ","XX    XX"};
	char L[7][9]={"XX      ","XX      ","XX      ","XX      ","XX      ","XX      ","XXXXXXXX"};
	char M[7][9]={"XX    XX","XXX  XXX","XX XX XX","XX    XX","XX    XX","XX    XX","XX    XX"};
	char N[7][9]={"XX    XX","XXX   XX","XXXX  XX","XX XX XX","XX  XXXX","XX   XXX","XX    XX"};
	char O[7][9]={"  XXXX  "," XX  XX ","XX    XX","XX    XX","XX    XX"," XX  XX ","  XXXX  "};
	char P[7][9]={"XXXXXX  ","XX   XX ","XX   XX ","XXXXXX  ","XX      ","XX      ","XX      "};
	char Q[7][9]={"  XXXX  "," XX  XX ","XX    XX","XX    XX"," XX  XX ","  XXXXX ","      XX"};
	char R[7][9]={"XXXXXX  ","XX   XX ","XX   XX ","XXXXXX  ","XX  XX  ","XX   XX ","XX    XX"};
	char S[7][9]={" XXXXXXX","XX      ","XX      "," XXXXXX ","      XX","      XX","XXXXXXX "};
	char T[7][9]={"XXXXXXXX","   XX   ","   XX   ","   XX   ","   XX   ","   XX   ","   XX   "};
	char U[7][9]={"XX    XX","XX    XX","XX    XX","XX    XX","XX    XX","XX    XX","  XXXX  "};
	//char V[7][9]={"XX    XX","XX    XX"," XX  XX "," XX  XX "," XX  XX ","  XXXX  ","   XX   "};
	char V[7][9]={"XX    XX","XX    XX","XX    XX","XX    XX","XX    XX"," XX  XX ","  XXXX  "};
	char W[7][9]={"XX    XX","XX    XX","XX    XX","XX XX XX","XXXXXXXX","XXX  XXX","XX    XX"};
	char X[7][9]={"XX    XX"," XX  XX ","  XXXX  ","   XX   ","  XXXX  "," XX  XX ","XX    XX"};
	char Y[7][9]={"XX    XX"," XX  XX ","  XXXX  ","   XX   ","   XX   ","   XX   ","   XX   "};
	char Z[7][9]={"XXXXXXXX","     XX ","    XX  ","   XX   ","  XX    "," XX     ","XXXXXXXX"};
	
	printf("\nPlease Enter a Word : ");
	gets(str);
	
	for(j=0;j<7;j++)
	{
		i=-1;
		while(str[++i]!='\0')
		{
			switch(str[i])
			{
				case 'A':printf("%s  ",A[j]);break;
				case 'B':printf("%s  ",B[j]);break;
				case 'C':printf("%s  ",C[j]);break;
				case 'D':printf("%s  ",D[j]);break;
				case 'E':printf("%s  ",E[j]);break;	
				case 'F':printf("%s  ",F[j]);break;
				case 'G':printf("%s  ",G[j]);break;
				case 'H':printf("%s  ",H[j]);break;
				case 'I':printf("%s  ",I[j]);break;
				case 'J':printf("%s  ",J[j]);break;	
				case 'K':printf("%s  ",K[j]);break;
				case 'L':printf("%s  ",L[j]);break;
				case 'M':printf("%s  ",M[j]);break;
				case 'N':printf("%s  ",N[j]);break;
				case 'O':printf("%s  ",O[j]);break;
				case 'P':printf("%s  ",P[j]);break;
				case 'Q':printf("%s  ",Q[j]);break;
				case 'R':printf("%s  ",R[j]);break;		
				case 'S':printf("%s  ",S[j]);break;
				case 'T':printf("%s  ",T[j]);break;
				case 'U':printf("%s  ",U[j]);break;
				case 'V':printf("%s  ",V[j]);break;
				case 'W':printf("%s  ",W[j]);break;
				case 'X':printf("%s  ",X[j]);break;
				case 'Y':printf("%s  ",Y[j]);break;
				case 'Z':printf("%s  ",Z[j]);break;
				case ' ':printf("       ");break;	
								
			}
		
		}
		printf("\n");
	}
}
				
				
			

#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the no\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("0");
	}
	if(n<0)
	printf("It is negative");
	if(n>0)
	printf("It is Positive");
	getch();

}

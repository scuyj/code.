#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%-20d%-20d\n",i,i*i);
		i++;
	}
	return 0;
}

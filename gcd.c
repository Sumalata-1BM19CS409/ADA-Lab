#include<stdio.h>
int main()
{
	int n, m,rem;
	printf("enter value of m and n \n");
	scanf("%d%d",&m,&n);
	while(n!=0)
		{
			rem=m%n;
			m=n;
			n=rem;
		}
	printf("GCD=%d\n",m);
}

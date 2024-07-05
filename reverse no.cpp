#include<stdio.h>
int main()
{
	int n,digit,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n)
	 {
	 	digit=n%10;
	 	rev=rev*10+digit;
	 	n=n/10;
}
	 	printf("%d",rev);
	return 0;
		
}

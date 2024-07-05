#include<stdio.h>
int main()
{
//method 1 with more time complexity(O(n))
//
//
//	int x=0,n,i;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		x=x^i;
//	}
//	printf("%d",x);


//method 2 with less complexity(O(1))
//
//
//	int x=0,n,i;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	if(n%4==1) printf("%d",1);     //same line no need to put curly braces
//	if(n%4==2) printf("%d",n+1);
//	if(n%4==3) printf("%d",0);
//	if(n%4==0) printf("%d",n);



// method 3 using lower limit and upper limit
//int x=0,l,u,i;
//		printf("enter the lower limit");
//		scanf("%d",&l);
//		printf("enter the upper limit");
//    	scanf("%d",&u);
//	for (i=l;i<=u;i++){
//		x=x^i;
//	}
//	printf("%d",x);




//method 4 with other logic
    int xor(int n){
    	if(n%4==1) return("%d",1);
    	if(n%4==2) return("%d",n+1);
    	if(n%4==3) return("%d",0);
    	if(n%4==0) return("%d",n);
	}
	int main()
	int u,l,x=0;
	printf("enter the lower limit");
		scanf("%d",&l);
		printf("enter the upper limit");
    	scanf("%d",&u);
	    x=xor(u)^(l-1);
	    printf("%d",x);
		return 0;
}
///erros are there


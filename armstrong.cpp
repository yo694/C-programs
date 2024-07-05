#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
    int n,len=0,n1,n2,rem=0,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0){
        n=n/10;
        len++;
    }
    while(n1!=0){
        rem=n1%10;
        sum=sum+pow(rem,len);
        n1=n1/10;
    }
    if(n2==sum){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}

    return 0;
}

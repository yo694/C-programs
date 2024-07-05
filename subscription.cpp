#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int n,x,s;
    scanf("%d%d",&n,&x);
    s=(n+5)/6;
    int total_cost=s*x;
    printf("%d\n",total_cost);
    }
    return 0;
}

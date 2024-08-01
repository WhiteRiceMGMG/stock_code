#include <stdio.h>
int main(void){
    int n,dig=0,sum=0;
    scanf("%d",&n);
    while(n){
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    printf("%d",sum);
}
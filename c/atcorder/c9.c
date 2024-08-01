#include <stdio.h>

int main(){
    int n,a,b,dig,sum=0,i;
    scanf("%d %d %d",&n,&a,&b);
    for(i=a;i<=b;i++){
        while(n){
            dig=n%10;
            sum=sum+dig;
            n=n/10;
        }
    }

    printf("%d",sum);

}
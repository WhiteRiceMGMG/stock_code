#include <stdio.h>
int main(void){
    int n,a,b,i,total=0;
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++){
        int j=i,sum=0,dig=0;
        while(j){
            dig=j%10;
            sum=sum+dig;
            j=j/10;
        }
        if(sum>=a&&sum<=b){
            total=total+i;
            //printf("%d\n",i);
        }
    }
    printf("%d",total);
    return 0;
}
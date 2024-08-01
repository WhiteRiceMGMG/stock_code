#include <stdio.h>

int main(){
    int n,a,b,dig,sum=0,i,total=0;
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++){
        if(i>=10){
            int m=i,sum=0;
        while(m){
            dig=m%10;
            sum=sum+dig;
            m=m/10;
        }
        }else{
            sum=i;
        }
        if(i>=a&&i<=b){
            total=total+sum;
        }
    }

    printf("%d",total);

}
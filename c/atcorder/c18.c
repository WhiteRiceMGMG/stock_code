#include <stdio.h>

int main(void){
    int i,j,k,n,y;
    scanf("%d %d",&n,&y);
    //printf("SCAN,SUCCESS");
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            k=n-i-j;
            if(10000*i+5000*j+1000*k==y&&i+j+k==n&&k>=0){
                printf("%d %d %d",i,j,k);
                return 0;
            }
        }
    }
    printf("-1 -1 -1");
    
    return 0;
}
#include <stdio.h>

int main(void){
    int i,j,k,n,y;
    scanf("%d %d",&n,&y);
    //printf("SCAN,SUCCESS");
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            for(k=0;k<=n;k++){
                if(i*10000+j*5000+k*1000==y&&i+k+j<=n){
                    printf("%d %d %d\n",i,j,k);
                    return 0;
                }
            }
        }
    }
    printf("-1 -1 -1");
    
    return 0;
}
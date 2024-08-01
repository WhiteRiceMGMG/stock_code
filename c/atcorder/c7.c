#include <stdio.h>
int main(void){
    int a,b,c,x,i,j,k,total=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&x);
    printf("\n");
    
    for(i=0;i<a+1;i++){
        if(500*i==x){
            total++;
        }
        for(j=0;j<b+1;j++){
            if(500*i+100*j==x){
                total++;
            }
            for(k=0;k<c+1;k++){
                if(500*i+100*j+50*k==x){
                    total++;
                }
            }
        }
    }
    printf("%d",total);
    
    return 0;

}
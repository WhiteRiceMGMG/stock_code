#include <stdio.h>
int main(void){
    int i,n,total=0,a[201];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    while(1){
        if(a[i]%2!=0){
            printf("Odd");
            
            break;
        }
        printf("%d ",a[i]/2);
        total++;
    }
    printf("%d",total);

}
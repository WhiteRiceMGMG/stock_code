#include <stdio.h>
int main(void){
    int i,n,total=0,a[201];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    while(1){
        for(i=0;i<n;i++){
            if(a[i]%2!=0){
                break;
            }
        }
        if(i<n){
            break;
        }
        for(i=0;i<n;i++){
            a[i]=a[i]/2; 
        }
        total++;
    }
    printf("%d",total);
    return 0;
}
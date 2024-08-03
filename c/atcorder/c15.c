#include <stdio.h>

int main(void){
    int n,i,total,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        //printf("%d\n",a[i]);
    }
    
    int backet[n],count,j;
    
    for(i=0;i<n;i++){
        backet[i]=a[i];
        //printf("%d",backet[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //printf("%d\n",backet[j]);
            if(backet[i]==a[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    
    return 0;
}
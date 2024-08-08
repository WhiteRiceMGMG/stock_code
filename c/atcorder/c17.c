#include <stdio.h>

int main(void){
    int i,n,a[101],b[101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++){
        b[a[i]]=a[i];
        printf("%d",b[i]);
    }

    return 0;
}
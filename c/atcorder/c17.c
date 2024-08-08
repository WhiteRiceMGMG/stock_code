#include <stdio.h>

int main(void){
    int i,n,count=0,a[101],b[101];
    scanf("%d",&n);
    for(i=0;i<101;i++){
        b[i]=0;
        a[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        b[a[i]]=a[i];
        printf("%d\n",b[i]);
    }
    for(i=0;i<100;i++){
        if(b[i]!=0){
            count++;
            printf("count++\n");
        }
    }
    printf("%d",count);

    return 0;
}
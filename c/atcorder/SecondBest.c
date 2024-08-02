#include <stdio.h>
int main(void){
    int n,a[101],b[101],c[101],i,j,k,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //a[i]の設定が完了
    //a[i]のクローンb[i]を作っておいてa[i]は保存
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]<b[j]){
                tmp=b[i];
                b[i]=b[j];
                b[j]=tmp;    
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==b[1]){
            printf("%d",i+1);
        }
    }
    return 0;
}
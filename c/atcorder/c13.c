#include <stdio.h>
int main(void){
    int n,m,a[100],i,give_money,sum;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        sum=sum+a[i];
    }
    if(sum<m){
        printf("infinite");
    }
    for(give_money=1;give_money<m/n+1;give_money++){
        int total=0;
        for(i=0;i<n;i++){
            if(give_money<a[i]){
                total=total+give_money;
            }
            if(give_money>a[i]){
                total=total+a[i];
            }
        }
        if(total>m){
            printf("%d",give_money-1);
            return 0;
        }
    }
}
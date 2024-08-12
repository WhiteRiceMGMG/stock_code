#include <stdio.h>

int main(void){
    int n,t,a,temp;
    scanf("%d %d %d",&n,&t,&a);
    temp=n/2+1;
    if(t>=temp||a>=temp){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;    
}
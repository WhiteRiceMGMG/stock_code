#include <stdio.h>

int main(void){
    int n,t,a,temp;
    scanf("%d %d %d",&n,&t,&a);
    temp=(n-1)/2;
    if(t>=(temp+1|)|a>=(temp+1)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;    
}
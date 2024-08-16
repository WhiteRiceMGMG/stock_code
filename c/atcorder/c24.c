#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // b<cのとき，7時に寝て17時に起きるような場合
    if(b<c){
        if(b<a&&a<c){
            printf("No");
        }else{
            printf("Yes");
        }
    }
    // c<bのとき，20時に寝て7時に起きるような場合
    
    if(c<b){
        if((b<a&&a<24)||(0<=a&&a<c)){
        printf("No");
        }else{
        printf("Yes");
        }
    }
    return 0;
}
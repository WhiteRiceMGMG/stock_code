#include <stdio.h>
int main(void){
    int y,day;
    scanf("%d",&y);
    if(y%4!=0){
        day=365;
    }
    if(y%4==0&&y%100!=0){
        day=366;
    }
    if(y%100==0&&y%400!=0){
        day=365;
    }
    if(y%400==0){
        day=366;
    }
    printf("%d",day);
    return 0;
}
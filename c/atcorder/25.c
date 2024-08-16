#include <stdio.h>
#include <string.h>
int main(void){
    char s[101];
    int i, num;
    fgets(s,sizeof(s),stdin);
    for(i=0;i<sizeof(s);i++){
        putchar(s[i]);
    }
    for(i=(sizeof(s)-1);i>0;i--){
        putchar(s[i]);
    }
    //printf("%s",s);
}
#include <stdio.h>
#include <string.h>
int main(void){
    char s[10001],temp[10];
    int i,j;
    fgets(s,sizeof(s),stdin);
    //putchar(s[7]);
    for(i=0;i<sizeof(s);i++){
    for(;;j++){
        temp[j]=s[i];
        if(strcmp(temp,"dream")==0||strcmp(temp,"dreamer")==0||strcmp(temp,"erase")==0||strcmp(temp,"eraser")==0){
            j=0;
            printf("success");
        }

        break;
    }
    }
    return 0;
}
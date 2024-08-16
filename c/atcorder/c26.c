#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    while (len>0&&(str[len-1]=='0'||str[len-1] =='.')) {
        if (str[len-1]=='.') {
                str[len-1]='\0';
            break;
        }
        str[--len]='\0';
    }
    printf("%s\n", str);
    return 0;
}

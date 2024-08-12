#include <stdio.h>

int main(void){
    int n,i;
    char a[101],b[101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fgets(a,sizeof(a),stdin);
        printf("%c",a[i]);
    }
}
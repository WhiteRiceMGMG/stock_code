#include <stdio.h>

int main(void){
    int a, b, c, x;
    int i, j, k;
    int total = 0; // ここで total を 0 に初期化します。

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    for(i = 0; i <= a; i++){
        for(j = 0; j <= b; j++){
            for(k = 0; k <= c; k++){
                if(500 * i + 100 * j + 50 * k == x){
                    total++;
                }
            }
        }
    }

    printf("%d\n", total);

    return 0;
}

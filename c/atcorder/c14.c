#include <stdio.h>

int main(void) {
    int n, m, a[100], i, sum = 0;
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if(sum <= m) {
        printf("infinite\n");
        return 0;
    }

    int give_money;
    for(give_money = 1; ; give_money++) {
        int total = 0;
        for(i = 0; i < n; i++) {
            if(give_money < a[i]) {
                total += give_money;
            } else {
                total += a[i];
            }
        }
        if(total > m) {
            printf("%d\n", give_money - 1);
            return 0;
        }
    }
}

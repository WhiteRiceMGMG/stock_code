#include <stdio.h>
int main(void) {
    int i, n, total = 0, a[201];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");

    while (1) {
        int allEven = 1;  // 全てが偶数であることを示すフラグ
        for (i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                allEven = 0;  // 奇数が見つかればフラグを下げる
                break;
            }
            a[i] = a[i] / 2;
        }
        if (allEven == 0) {
            break;  // 奇数が見つかったのでループを終了
        }
        total++;
    }
    printf("%d", total);
    return 0;
}

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
        for (i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                break;  // 奇数が見つかったら内側のforループを終了
            }
        }
        if (i < n) {  // 奇数が見つかったかをチェック
            break;  // 奇数が見つかったので外側のwhileループを終了
        }
        for (i = 0; i < n; i++) {  // すべての要素を2で割る
            a[i] = a[i] / 2;
        }
        total++;
    }

    printf("%d\n", total);  // totalを出力
    return 0;  // プログラム全体が終了する
}

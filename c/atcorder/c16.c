#include <stdio.h>
#define M 101 /* データ範囲の最大値 */

int main(void){
    int n,i,*a;
    int count;
    int *buckets;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }

    //bucket_sort(*a, n);
    
    for (i = 0; i < n; i++) {
        if(buckets[i] != 0){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
//void bucket_sort(int *numbers, int number_of_item)
{
    int buckets[M];
    int i; /* ループカウント変数 */


    /* prepare buckets バケットを用意 */
    for (i = 0; i < M; i++) {
        buckets[i] = 0;
    }
    /* putting in bucket 元のデータをバケットに入れる*/
    for (i = 0; i < number_of_item; i++) {
        buckets[numbers[i]] = numbers[i];
    }
    
}
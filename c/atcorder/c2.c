/*
黒板にNこの整数が書かれている．
黒板に書かれている整数がすべて偶数の時，次の操作ができる．
黒板に書かれている整数すべてを２で割ったものに置き換える
何回操作を行うことができるか
1<= N <= 200
1 <= A <= 10^9
入力は以下の形式
N 
A A A A A
3
8 12 40  → 2
4
5 6 8 10 → 0
*/


#include <stdio.h>

int main(void){
    int i, n, a[201];
    while(1){;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            printf("%d",a[i]);
            if(a[i]%2!=0){
                printf("odd");
                break;
            }
            a[i]=a[i]/2;
        }
        break;
    }
    return 0;
}




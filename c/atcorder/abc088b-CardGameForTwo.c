#include <stdio.h>
int main(){
int n,number[101],i,j,k,tmp;
scanf("%d",&n);
for(k=0;k<n;k++){
    scanf("%d",&number[k]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(number[i]<number[j]){
            tmp=number[i];
            number[i]=number[j];
            number[j]=tmp;
        }
    }
}
int alice_total=0,bob_total=0;
for(i=0;i<n;i=i+2){
    alice_total=alice_total+number[i];
    bob_total=bob_total+number[i+1];
}

//printf("%d %d",alice_total,bob_total);
printf("%d\n",alice_total-bob_total);

/*
for(i=0;i<n;i++){
    printf("%d ",number[i]);
}
*/
}
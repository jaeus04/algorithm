#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    for(int i=1; i < N; i++){
        int temp=i;
        int temp2=i;
        while (temp > 0){
            temp2 += temp % 10;
            temp /= 10;
        }
        if(temp2 == N){
            printf("%d", i);
            N=0;
            break;
        }
    }
    if(N!=0){
        printf("0");
    }
    return 0;
}
#include <stdio.h>

int main(void){
    int N, M;
    int arr[100]={0};
    int ans=0;
    int temp=0;
    scanf("%d %d", &N, &M);
    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i < N; i++){
        for(int j=i+1; j < N; j++){
            for(int k=j+1; k < N; k++){
                temp = arr[i] + arr[j] + arr[k];
                if(temp <= M && ans <= temp){
                    ans=temp;
                }
            }
        }
    }
    printf("%d", ans);
}
#include <stdio.h>

int main(void) {
  int N;
  int K;
  int a[1000];
  scanf("%d %d",&N,&K);
  for(int i=0;i<N;i++){
    scanf("%d", &a[i]);
  }
  for(int i=0; i<N; i++){
    for(int j=i; j<N; j++){
      if(a[i]<a[j]){
        int temp =a[j];
        a[j]=a[i];
        a[i]=temp;
      }
    }
  }
  printf("%d", a[K-1]);
}
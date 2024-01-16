#include<stdio.h>

int main(void){
  int N;
  int i=0;
  scanf("%d", &N);
  while(N>0){
    int temp=i;
    while (temp>100){
      if(temp%1000==666){
        N--;
        break;
      }
      temp/=10;
    }
    i++;
  }
  printf("%d", i-1);
}
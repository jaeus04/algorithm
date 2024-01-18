#include<stdio.h>

int main(void){
  int N;
  scanf("%d", &N);
  int M5=N/5;
  int M3=0;
  if(N%5==0){
    printf("%d", N/5);
    return 0;
  }
  while (M5!=0){
    if ((N-M5*5)%3!=0){
      M5--;
    }
    else{
      M3=(N-M5*5)/3;
      break;
    }
  }
  if(M5==0&&N%3==0){
    M3=N/3;
    printf("%d", M5+M3);
  }
  else if(M3==0){
    printf("-1");
  }
  else{
    printf("%d", M5+M3);
  }
  return 0;
}
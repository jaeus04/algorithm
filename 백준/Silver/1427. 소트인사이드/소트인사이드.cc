#include <stdio.h>

int main(void){
  int N;
  int arr[10];
  scanf("%d", &N);
  int i=0;
  while(N!=0){
    arr[i]=N%10;
    N/=10;
    i++;
  }
  for(int j=0;j<i;j++){
    for(int k=j;k<i;k++){
      if(arr[k]>arr[j]){
        int temp;
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(int j=0;j<i;j++){
    printf("%d", arr[j]);
  }
  return 0;
}
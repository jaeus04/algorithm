#include <stdio.h>

int main(void) {
  int a[5];
  int sum=0;
  for(int i=0;i<5;i++){
    scanf("%d", &a[i]);
  }
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(a[i]>a[j]){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(int i=0;i<5;i++){
    sum+=a[i];
  }
  printf("%d\n%d",sum/5, a[2]);
  return 0;
}
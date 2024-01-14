#include <stdio.h>

int main(void){
  int a, b;
  int min;
  scanf("%d %d", &a,&b);
  int ans[50][50]={};
  char arr[50][50]={};
  for(int i=0;i<a;i++){
    scanf("%s", arr[i]);
  }
  for(int i=0;i<a-7;i++){
    for(int j=0;j<b-7;j++){
      int temp1=0;
      int temp2=0;
      for(int k=0;k<8;k++){
        for(int l=0;l<8;l++){
          if((k+l)%2==0 && arr[i+k][j+l]!='W')
            temp1++;
          if((k+l)%2==1 && arr[i+k][j+l]!='B')
            temp1++;
          if((k+l)%2==0 && arr[i+k][j+l]!='B')
            temp2++;
          if((k+l)%2==1 && arr[i+k][j+l]!='W')
            temp2++;
        }
      }
      ans[i][j]=temp1<temp2 ? temp1 : temp2;
    }
  }
  min=ans[0][0];
  for(int i=0;i<a-7;i++){
    for(int j=0;j<b-7;j++){
      min=ans[i][j]<min ? ans[i][j] : min;
    }
  }
  printf("%d",min);
}
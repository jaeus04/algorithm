#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int x;
  int y;
}coordinate;

int compare(const void *a, const void *b)
{
    coordinate A = *(coordinate *)a;
    coordinate B = *(coordinate *)b;
    if (A.x > B.x)
        return 1;
    else if (A.x == B.x){
        if (A.y > B.y)
            return 1;
        else
            return -1;
    }
    return -1;
}

int main()
{
  int n;
  scanf("%d", &n);
  int i = 0;
  coordinate arr[n];
  while (i < n){
      scanf("%d %d", &arr[i].x, &arr[i].y);
      i++;
  }
  qsort(arr, n, sizeof(coordinate), compare);
  i = 0;
  while (i < n){
      printf("%d %d\n", arr[i].x, arr[i].y);
      i++;
    }
}
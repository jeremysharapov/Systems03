#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
  srand(time(NULL));
  int arr[10];
  int i;
  printf("The original array:\n");
  for (i = 0; i < 10; i++){
    arr[i] = rand();
    if (i == 9){
      arr[i] = 0;
    }
    printf("arr[%d]: %d\n", i, arr[i]);
  }
  int *p;
  p = &arr;
  int arr2[10];
  int j;
  i = 9;
  printf("The second array:\n");
  for (j = 0; j < 10; j++){
    arr2[i] = *p;
    i--;
    p++;
  }
  for (j = 0; j < 10; j++){
     printf("arr2[%d]: %d\n", j, arr2[j]);
  }
}

#include <stdio.h>

int main() {
  int sum = 0;
  for(int i=1;i<=10;i++){
    sum = sum + i;
    printf("%d", i);
  }
  printf("%d", sum);
}
#include <stdio.h>
int main() {
    
  int a[15];

  for (int i = 0; i < 15; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  
  for (int i = 1; i < 15; i++) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("Largest element = %d", a[0]);

  return 0;
}



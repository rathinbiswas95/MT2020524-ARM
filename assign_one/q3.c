#include <stdio.h>
int main() {
    
  int a[20],count=0;

  for (int i = 0; i < 20; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  
  for (int i = 0; i < 20; i++) {
    if(a[i]%2==0){
        count=count+1;
    }
  }

  printf("Total Even numbers = %d", count);

  return 0;
}

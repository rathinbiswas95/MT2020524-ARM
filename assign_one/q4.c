#include <stdio.h>
int main() {
    
  int a[20],temp=0;

  for (int i = 0; i < 20; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  
  for (int i = 0; i < 19; i++) {
     for(int j=0; j<19-1-i;j++){
         if(a[j]>a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
    }

  for (int i = 0; i < 20; i++) {
    printf("%d,", a[i]);;
  }

  return 0;
}

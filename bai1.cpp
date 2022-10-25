#include <stdio.h>

int sodao(int n){ 
  int y = 0; 
  while (n > 0) {
    y = y * 10 + n % 10;
    n /= 10;
  }
  return y;
}
int main(){
    int n;
 
    printf(" nhap mot so nguyen duong: ");
    scanf("%d",&n);

    int y = sodao(n);
    printf("So dao nguoc: %d\n",sodao( n) );

    return 0;
}


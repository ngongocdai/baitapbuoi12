#include<stdio.h>
float phanso(int n) {
  if (n == 1)
    return 1;
    return ((float)1/n)+phanso(n-1);
}int main(){
	 int n;
	 int i;
   
    float sum = 0; 
    
    printf("nhap n = ");
    scanf("%d", &n);       
        if(sum += (float)1/i){
        	  printf("%.2f\n", phanso( n));
}return 0;
}

   


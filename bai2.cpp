#include <stdio.h> 
int giatrimax(int a,int b,int c){ 
     if(a>b){ 
      if(a>c) return(a); 
      else return(c);} 
     else if(b>c) return(b); 
     else return(c); 
     
}int main(){
  int a,b,c,max;
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    printf("Nhap c=");
    scanf("%d",&c);
    if(max=a){
    	printf("gia tri lon nhat =%d",giatrimax( a,b, c));
	}
	return 0;
   	}
	

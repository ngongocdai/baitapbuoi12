#include<stdio.h>
int tong(int n) {
    if (n == 1) return 1;
    return tong(n - 1) + n;
}
int main(){
	int n;
	int i; 
    int sum=0 ; 
    printf("nhap n = ");
    scanf("%d", &n);
	if(sum+=i){
	printf("Tong cua day so la:%d ", tong(n));
	}
	return 0; 
}



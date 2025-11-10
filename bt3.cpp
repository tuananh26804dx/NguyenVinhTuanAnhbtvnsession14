#include <stdio.h>



long long giai_thua(int n ){
	long long giai_thuaa = 1 ;
	int i;
	for ( i = 1 ; i <= n ; i++){
		giai_thuaa *= i ; 
	} 
	
	printf("%d! = %lld " , n , giai_thuaa);
	
	 return giai_thuaa; 
} 

int main(){
	
	int n ;
	
	printf("Hay nhap n vao day : ");
	scanf("%d" , &n );
	
	giai_thua(n); 
	
	
	
} 

#include <stdio.h>

 int  uoc( int n ){
 	int i , sum = 0 ; 
	 for( i = 1 ; i < n ; i++){
	 	if ( n % i == 0 ){
	 		sum += i; 
		 } 
	 } 
	 
	 return sum; 
 } 


 int main(){
 	int n , sum ; 
 	printf("Nhap n ");
	 scanf("%d" , &n );
	 
    sum = 	uoc(n);
	
	if ( sum = n  ){
		printf("%d la so hoan hoan " , n );
	} else {
		printf("%d khong phai la so hoan hao " , n ); 
	} 
	
	 
	 return 0; 
 } 

#include <stdio.h>


int so_nguyen(int arr[] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Nhap gia tri so nguyen vao day : ");
	    scanf("%d" , &arr[i]); 
	} 
} 


int so_lon_nhat(int arr[] , int n  ){
	int max = arr[0]; 
	int i; 
	for ( i = 0 ; i < n ; i++){
		if ( max < arr[i]){
			max = arr[i]; 

		} 
	} 
	 printf("So lon nhat = %d " , max);
	return max;
  
} 


int main(){
	
	int n ; 
	printf("Nhap so nguyen n vao day : ");
	scanf("%d" , &n );
	int arr[n];
	so_nguyen(arr,n);
	so_lon_nhat(arr,n);
             
	return 0; 
} 

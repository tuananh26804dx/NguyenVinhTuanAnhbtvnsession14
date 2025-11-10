#include <stdio.h>

void in_mang(int arr[] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("%d  " , arr[i]  ); 
	} 
} 

int nhap_mang(int arr[] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("arr[%d] = " , i );
		scanf("%d" , &arr[i]); 
	} 
} 

int main(){
	int n;
	printf("Nhap chi so phan tu n : ");
	scanf("%d" , &n );
	int arr[n]; 
	nhap_mang(arr , n );
	in_mang(arr , n ); 
} 

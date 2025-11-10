#include <stdio.h>

int nhap_mang( int arr[] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Nhap gia tri arr[%d] = " , i );
		scanf("%d" , &arr[i]);
	}
	for ( i = 0 ; i < n ; i++){
		printf("%d  " , arr[i]);
	}
}


int main(){
	int n;
	printf("Nhap n = " );
	scanf("%d" , &n );
	int arr[n];
	nhap_mang(arr,n);
}





#include <stdio.h>

int tong(int number1 , int number2 ){
	
	int sum ; 
	sum = number1 + number2;
	return sum ; 
	

} 


int main(){
    
    int number1 , number2;
	
	printf("number1 = ");
	scanf("%d" , &number1);
	
	printf("number2 =  ");
	scanf("%d" , &number2 );
	
	int sum = tong(number1 , number2 ); 
	
	printf("Tong cua %d va %d la : %d " , number1 , number2 , sum ); 
     
} 

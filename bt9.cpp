#include <stdio.h>

int UCLN(int a, int b) {
    while ( a!=b ) {
    	if ( a > b ){
    		a = a - b ; 
		} else {
			b = b - a ; 
		} 
}
      return a;

}

int main() {
    int x, y;
    printf("Nhap x : ");
    scanf("%d", &x );
    printf("Nhap y : ");
    scanf("%d", &y );
    printf("UCLN cua %d va %d la: %d\n", x, y, UCLN(x, y));
    return 0;
}


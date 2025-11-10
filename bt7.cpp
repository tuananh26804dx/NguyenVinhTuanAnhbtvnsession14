#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>



int kiem_tra_nguyen_to(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    int i; 
    for ( i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    printf("Nhap mot so: ");
    scanf("%d", &number);
    
    if (kiem_tra_nguyen_to(number)) {
        printf("%d la so nguyen to\n", number);
    } else {
        printf("%d khong phai so nguyen to\n", number);
    }
    
    return 0;
}

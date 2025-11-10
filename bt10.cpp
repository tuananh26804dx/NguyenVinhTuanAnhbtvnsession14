#include <stdio.h>

int arr[100] , n , choose , value , update , position , choice , temp , left , right , mid , x , i , j ; 

void menu(void){
	printf("\n===========================MENU=============================\n");
	printf("||1.Nhap so phan tu can nhap va gia tri cac phan tu        ||\n");
	printf("||2.In ra gia tri cac phan tu dang quan ly                 ||\n");
	printf("||3.Them mot phan tu vao vi tri chi dinh                   ||\n");
	printf("||4.Sua mot phan tu o vi tri chi dinh                      ||\n");
	printf("||5.Xoa mot phan tu o vi tri chi dinh                      ||\n");
	printf("||6.Sap xep cac phan tu                                    ||\n");
	printf("||a.Giam dan                                               ||\n");
	printf("||b.Tang dan                                               ||\n"); 
	printf("||7.Tim kiem phan tu nhap vao                              ||\n");
	printf("||a.Tim kiem tuyen tinh                                    ||\n"); 
	printf("||b.Tim kiem nhi phan                                      ||\n"); 
	printf("||8.Thoat                                                  ||\n");
	printf("============================================================");
} 


void chuc_nang_1(void){ 
 
		
			printf("\nHay nhap chi so phan tu vao day : ");
			scanf("%d" , &n ); 
			
			if ( n > 100 || n <= 0  ){
				printf("\nSo phan tu khong hop le !!! "); 
			} else {
				for ( i = 0 ; i < n ; i++){
					printf("arr[%d] = " , i );
					scanf("%d" , &arr[i]); 
				} 
			} 
} 
void chuc_nang_2(void) {
    if (n <= 0) {
        printf("\nMang chua co du lieu!\n");
    } else {
        printf("\nCac phan tu trong mang: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void chuc_nang_3(void){
	
	printf("Hay nhap vi tri : ");
	scanf("%d" , &position );
	printf("Nhap gia tri : ");
	scanf("%d" , &value ); 
	
	for ( i = n ; i > position ;i--){
		 arr[i] = arr[i-1] ;
		 position = value; 
	} 
	
	printf(" Da them gia tri %d vao vi tri %d " , value , position ); 
} 

void chuc_nang_4(void) {
    int position, update;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &position);
    
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Nhap gia tri sua: ");
    scanf("%d", &update);

    arr[position] = update; // 

    printf("Da sua gia tri %d o vi tri %d\n", update, position);
}


void chuc_nang_5(void) {
    

    printf("Nhap vi tri can xoa: ");
    scanf("%d", &position);

   
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

 
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("Da xoa phan tu o vi tri %d\n", position);
}



void chuc_nang_6(void) {
    

    printf("Chon cach sap xep:\n");
    printf("1. Giam dan\n");
    printf("2. Tang  dan\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if ((choice == 1 && arr[j] < arr[j + 1]) || 
                (choice == 2 && arr[j] > arr[j + 1])) {
               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void chuc_nang_7(void) {
    int found = -1;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    printf("Chon phuong phap tim kiem:\n");
    printf("1. Tuyen tinh (Linear Search)\n");
    printf("2. Nhi phan (Binary Search, mang phai tang dan)\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    if (choice == 1) {
    
        for (i = 0; i < n; i++) {
            if (arr[i] == x) {
                found = i;
                break;
            }
        }
    } else if (choice == 2) {
        
        left = 0;
        right = n - 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] == x) {
                found = mid;
                break;
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    } else {
        printf("Lua chon khong hop le!\n");
        return;
    }

    if (found != -1) {
        printf("Tim thay %d o vi tri %d\n", x, found);
    } else {
        printf("%d khong tim thay trong mang\n", x);
    }
}



void chuc_nang_8(void){
	printf("Cam on ban da su dung chuong trinh nay "); 
	
} 



int main(){
	
	do { 
		menu(); 
       int choose ;
	    printf("\nHay nhap chuc nang ban muon : ");
        	scanf("%d" , &choose ); 
        switch(choose){
        	
        	case 1 :
        		chuc_nang_1();
			break;
			case 2:
			    chuc_nang_2(); 
			    break; 
		    case 3:
			    chuc_nang_3(); 
			    break; 
        	case 4:
			    chuc_nang_4(); 
			     break; 
			case 5:
			    chuc_nang_5(); 
			     break; 
			case 6:
			    chuc_nang_6(); 
			     break; 
			case 7:
			    chuc_nang_7(); 
			     break; 
			case 8:
			    chuc_nang_8(); 
				break;
			default : {
				printf("Thong bao loi , xin vui long nhap lai chuong trinh "); 
				break;
		    	} 
			}
		}  while(1); 
    	
	} 
 
 


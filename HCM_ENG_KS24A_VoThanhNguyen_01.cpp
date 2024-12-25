#include <stdio.h>

int main(){
	int n,choice,min,temp,target;
	int arr[n];
	int sum = 0;

	do{
		printf("MENU\n");
    	printf("1.nhap so phan tu va gia tri cho mang\n");
    	printf("2.in ra cac phan tu trong mang\n");
    	printf("3.tim gia tri nho nhat va lon nhat trong mang\n");
    	printf("4.in ra tong tat ca cac phan tu\n");
    	printf("5.them mot phan tu vao cuoi mang\n");
    	printf("6.xoa phan tu tai mot vi tri cu the\n");
    	printf("7.sap xep mang theo thu tu giam dan\n");
    	printf("8.tim kiem phan tu trong mang\n");
    	printf("9.in ra toan bo so nguyen to trong mang\n");
    	printf("moi nhap vao lua chon: ");
    	scanf("%d", &choice);
    	
    	switch(choice){
    		case 1:
    			printf("nhap so phan tu cua mang: ");
    			scanf("%d", &n);
    			for(int i=0; i<n;i++){
    				printf("nhap phan tu thu %d: ", i);
    				scanf("%d", &arr[i]);
				}
				printf("\n");
				break;
			case 2:
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d,",i,arr[i]);
				}
				printf("\n");
				break;
			case 4:
				for(int i=0;i < n;i++){
					sum += arr[i];
				}
				printf("tong tat ca cac phan tu:%d", sum);
				printf("\n");
				break;
			case 10:
				for(int i=0;i<n-1;i++){
					int min=i;
					for(int j=i+1;j<n;j++){
						if(arr[j]<arr[min]){
							min = j;
						}
					}
					temp = arr[i];
                    arr[i] = arr[min];
                    arr[min] = temp;
				}
				for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 8:
                    printf("Nhap so can tim: ");
                    scanf("%d", &target);
                    for (int i = 0; i < n; i++) {
                    if (arr[i] == target) {
                        printf("So %d ton tai trong mang", target);
                        }
                    }
				printf("\n");
				break;
			case 7:
				 for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                         temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                           }
                       }
                    }
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    break;

				
		}
	
	}while(choice !=11);
	
	
	
	return 0;
}

#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 0; 
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep mang giam dan\n");
        printf("7. Sap xep mang tang dan\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("\nNhap so phan tu cua mang: ");
            scanf("%d", &n);
            if (n <= 0 || n > 100) {
                printf("So phan tu khong hop le!\n");
                n = 0;
            } else {
                printf("\nNhap cac phan tu cua mang: \n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu [%d]: ", i);
                    scanf("%d", &arr[i]);
                }
            }
        } else if (choice == 2) {

            printf("\nCac phan tu trong mang: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 3) {
 
            int pos, value;
            printf("Nhap vi tri can them: ");
            scanf("%d", &pos);
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);

            if (pos < 0 || pos > n || n >= 100) {
                printf("Vi tri khong hop le hoac mang da day!\n");
            } else {
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
            }
        } else if (choice == 4) {
 
            int pos, value;
            printf("Nhap vi tri can sua: ");
            scanf("%d", &pos);
            printf("Nhap gia tri moi: ");
            scanf("%d", &value);

            if (pos < 0 || pos >= n) {
                printf("Vi tri khong hop le!\n");
            } else {
                arr[pos] = value;
            }
        } else if (choice == 5) {

            int pos;
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &pos);

            if (pos < 0 || pos >= n) {
                printf("Vi tri khong hop le!\n");
            } else {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
        } else if (choice == 6) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[i] < arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            printf("Mang da sap xep giam dan.\n");
        } else if (choice == 7) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            printf("Mang da sap xep tang dan.\n");
        } else if (choice == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le, vui long nhap lai.\n");
        }
    } while (choice != 8);

    return 0;
}




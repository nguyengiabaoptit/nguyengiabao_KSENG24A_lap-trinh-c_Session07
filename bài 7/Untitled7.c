#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (la so le): ", i + 1);
        scanf("%d", &array[i]);

        while (array[i] % 2 == 0) {
            printf("Gia tri vua nhap khong phai so le. hay nhap lai: ");
            scanf("%d", &array[i]);
        }
    }
      printf("Cac phan tu trong mang la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

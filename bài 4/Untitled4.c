#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so phan tu cua mang la: ");
    scanf("%d", &n);

    int array[n];

    printf("Nhap cac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang nay la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

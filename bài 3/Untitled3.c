#include <stdio.h>

int main() {
    int array[6] = {1, 2, 3, 4, 5,6};
    int b = 0;

    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 6; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            b = 1;
        }
    }

    if (b==0) {
        printf("Mang khong chua so chan");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int array[5], result[5];

    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            result[i] = array[i] + 3;
        } else {
            result[i] = array[i] + 2;
        }
    }

    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

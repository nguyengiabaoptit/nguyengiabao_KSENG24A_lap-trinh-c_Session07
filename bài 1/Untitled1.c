#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int arraysize  = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 6 ; i++) {
        printf("Phan tu thu %d: %d\n", i, array[i]);
    }

    printf("Do dai cua mang: %d\n", arraysize);

    return 0;
}

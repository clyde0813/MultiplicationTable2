#include <iostream>

int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        printf("%d단 \n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d * %d = %d \n", i,j,i*j);
        }
    }
}

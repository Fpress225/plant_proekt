#include <stdio.h>
#include <stdlib.h>

int *array(int array[], int size) {
    int *ptr = calloc(size, sizeof(int));
    for (int n = 0; n < size; n++) {
        ptr[n] = array[n];
    } 
    for (int n = 0, x = size - 1; n < size; n++, x--) {
        array[n] = array[x];
    }
    free(ptr);
    return array;
}

int main() {
    int *a_2 = array({1,43,56,64}, 4);
    for (int n = 0; n < 4; n++) {
        printf("%d\n", a_2[n]);
    }
    return 0;
}
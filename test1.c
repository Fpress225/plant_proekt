#include <stdio.h>
#include <stdlib.h>
#include "plant.h" 

long number_of_lines(char *file_patch) {
    long row_count = 0;
    FILE *f = fopen(file_patch, "r");
    if (f == NULL)
        return -1;
    int c;
    while ((c = fgetc(f)) != -1) {
        if (c == '\n')
            row_count++;
    }
    fclose(f);
    return row_count;
}

int main() {
    char *file_patch;
    printf("введи путь к файлу:");
    scanf("%s", file_patch);
    long row_count = number_of_lines(file_patch);
    if (row_count != -1) {
        printf("Количество строк: %ld\n", row_count);        
        return 0;
    }
    printf("Error %ld", row_count);
    return 1;
}
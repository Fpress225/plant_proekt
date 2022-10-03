#include <stdio.h>
#include <stdlib.h>
#include "plant.h" 

unsigned long number_of_lines (char *file_patch) {
    unsigned long row_count = 0;
    FILE *f = fopen(file_patch, "r");
    unsigned char c;
    while ((c = fgetc(f)) != -1) {
        if (c ==  '\n')
            row_count++;
    }
    fclose(f);
    return row_count;
}

void main() {
    number_of_lines("plant.csv");
}
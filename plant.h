#include <stdio.h>
#define CSV_SEPARATOR "^"


typedef struct Plant {
    unsigned long id;
    char *name;
    char *sort;
} plant;

plant *plant_init(plant plant1);

void plant_free(plant *ptr);

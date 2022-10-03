#define CSV_SEPARATOR "^"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "plant.h"

plant *parse_plant(char *str) {
    plant *pl;
    pl = malloc(sizeof(plant));
    char *sep = CSV_SEPARATOR;
    char *c;
    c = strtok(str, sep);
    pl->id = strtol(c, NULL, 10);
    pl->name = strtok(NULL, sep);
    pl->sort = strtok(NULL, sep);
    printf("%d\n%s\n%s\n", pl->id, pl->name, pl->sort);
    return pl;
}

void main() {
    

    parse_plant("132^dggd^dgdgdd");
}

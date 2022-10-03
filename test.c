#define CSV_SEPARATOR "^"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "plant.h"
#include <errno>

plant *parse_plant(char *str) {
    plant *pl;
    pl = malloc(sizeof(plant));
    char *sep = CSV_SEPARATOR;
    char *c;
    c = strtok(str, sep);
    errno = 0;
    pl->id = strtol(c, NULL, 10);
    if(errno != 0) {
        return NULL;
    }
    pl->name = strtok(NULL, sep);
    pl->sort = strtok(NULL, sep);
    printf("%d\n%s\n%s\n", pl->id, pl->name, pl->sort);
    return pl;
}

void main() {
    

    parse_plant("132^dggd^dgdgdd");
}

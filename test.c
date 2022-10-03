#define CSV_SEPARATOR "^"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Plant.h"

plant *parse_plant(char *string) {
    plant *pl;
    pl = malloc(sizeof(plant));
    char *sep = "^";
    pl->id = strtok(string, sep);
    pl->name = strtok(NULL, sep);
    pl->sort = strtok(NULL, sep);
    printf("%d\n%s\n%s\n", pl->id, pl->name, pl->sort);
    return pl;
}

void main() {
    

    parse_plant("132^dggd^dgdgdd");
}

#define CSV_SEPARATOR "^"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "plant.h"
#include <errno.h>

plant *parse_plant(char *str) {
    plant *pl = malloc(sizeof(plant));
    char *str_copy = strdup(str);
    char *c = strtok(str_copy, CSV_SEPARATOR);
    errno = 0;
    pl->id = strtol(c, NULL, 10);
    if(errno != 0) {
        return NULL;
        free(str_copy);
    }
    pl->name = strtok(NULL, CSV_SEPARATOR);
    pl->sort = strtok(NULL, CSV_SEPARATOR);
    printf("%d\n%s\n%s\n", pl->id, pl->name, pl->sort);
    free(str_copy);
    return pl;
}

void main() {
    

    parse_plant("132^dggd^dgdgdd");
}

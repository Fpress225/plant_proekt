#include <stdio.h>
#include <string.h>
#include "Plant.h"

plant *converting_a_string_to_a_plant_structure(char *string) {
    plant *pl;
    pl = malloc(sizeof(plant));
    char *sep = "^";
    pl->id = strtok(string, sep);
    pl->name = strtok(NULL, sep);
    pl->sort = strtok(NULL, sep);
    printf("%d\n%s\n%s\n", &pl->id, &pl->name, &pl->sort);
    return pl;
}

void main() {
    

    converting_a_string_to_a_plant_structure("132^dggd^dgdgdd");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Plant.h"

void add_plant_in_scv(char *name, char *sort) {
    char *c;
    int line_length;
    plant *ptr;
    FILE *f;
    ssize_t read;
    c = malloc(300 * sizeof(char));
    f = fopen("plants.scv", "a+");
    ptr = malloc(sizeof(plant));
    ptr->id = 1;
    while((read = getline(&c, &line_length, f)) != -1)
        ptr->id++;
    ptr->name = name;
    ptr->sort = sort;
    fprintf(f, "%d^%s^%s\n", ptr->id, ptr->name, ptr->sort);
    fclose(f);
    free(ptr);
}
void main() {
    char c[100];
    char *name;
    char *sort;
    printf("Введи название растения:");
    scanf("%s", &c);
    name = strdup(c);
    printf("Введи сорт растения:");
    scanf("%s", &c);
    sort = strdup(c);
    add_plant_in_scv(name, sort);
    free(name);
    free(sort);
}

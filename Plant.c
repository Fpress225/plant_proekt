#include <stdio.h>
#include <stdlib.h>
#include "Plant.h"
#include "flush_input.h"

plant *get_plant(unsigned long id, char *name, char *sort) {
    plant *ptr;
    FILE *f;
    f = fopen("plants.scv", "a");
    ptr = malloc(sizeof(plant));
    ptr->id = id;
    ptr->name = name;
    ptr->sort = sort;

    return ptr;
}

void plant_free(plant *ptr) {
    free(ptr);
}

void plant_change() {
    
}

void change_plant() {
    for(;;) {
        int action;
        char c;
        printf("Введите\n1, если хотите получить список растнений, которые вы добавляли\n2, если хотите изменить растение\n");
        scanf("%d%c", action, c);
        if (c != '\n') 
            puts("Пожалуйста не обманывай!");
        switch(action) {
            case 1:
                system("cat ./plants.scv");
                break;
            case 2:
                plant_change();
                break;
            default:
                puts("Нет такого дейвствия!");
        }
    }
}
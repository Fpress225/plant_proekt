#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "plant.h"

void flush_input(void) {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}

void add_plant_in_scv(char *name, char *sort) {
    char *c = malloc(300 * sizeof(char));
    int line_length;
    plant *ptr = malloc(sizeof(plant));
    FILE *f = fopen("plants.csv", "a+");
    ssize_t read;
    ptr->id = 1;
    while((read = getline(&c, &line_length, f)) != -1)
        ptr->id++;
    ptr->name = name;
    ptr->sort = sort;
    fprintf(f, "%d^%s^%s\n", ptr->id, ptr->name, ptr->sort);
    fclose(f);
    free(ptr);
}

void add_plant() {
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

int main() {
    int action;
    char c;
    for (;;) {   
        puts("Что вы хотите сделать?\n Введите\n1, если хотите добавить растение\n2, если хотите изменить растение\n3, если хотите посмотреть время полива каждого растения:");
        puts("введите 0 для выхода");
        int scan_result = scanf("%d%c", &action, &c);
        if (scan_result == 2 && c == '\n'){
            switch (action) {
                case 1:
                    add_plant();
                    break;
                case 2: 
                    printf("Есть такое действие!\n\n\n\n");
                    break;
                case 3: 
                    printf("Есть такое действие!\n\n\n\n");
                    break;
                case 0:
                    return 0;
                default:
                    printf("Нет такого действия!\n\n\n\n");
            }
        }
        if (c != '\n') {
            puts("Ты хотел меня обмануть? иди обратно\n\n\n\n");
            flush_input();
        }
    }
    return 0;
}
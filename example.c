#include <stdio.h>
#include <stdlib.h>

void add_plant() {
    FILE *f;
    f = fopen("plants.csv", "a");
    int id = 1;
    fprintf(f, "%d^", id);
    char *ptr;
    ptr = malloc(100 * sizeof(char));
    printf("Введи название растения:");
    scanf("%s", ptr);
    fprintf(f, "%s^", ptr);
    free(ptr);
    int *time;
    time = calloc(2, sizeof(int));
    printf("Введи время полива(пример: 12:00): ");
    scanf("%d%d", time[0], time[1]);
    fprintf(f, "%d:%d", time[0], time[1]);
    free(time);
}

int main() {
    add_plant();
}
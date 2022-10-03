#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr1;
    char *ptr2;
    ptr1 = (char *) calloc(50, sizeof(char));
    ptr2 = (char *) calloc(50, sizeof(char));
    printf("Enter the first color of the three colors (red, yellow, blue):");
    scanf("%s", ptr1);
    printf("Enter the second color of the three colors (red, yellow, blue):");
    scanf("%s", ptr2);
    if (ptr1[0] == 'r' && ptr1[1] == 'e' && ptr1[2] == 'd') 
        ptr1 = (char *) realloc(ptr1, (3, sizeof(char)));
    else if (ptr1[0] == 'y' && ptr1[1] == 'e' && ptr1[2] == 'l' && ptr1[3] == 'l' && ptr1[4] == 'o' && ptr1[5] == 'w')
        ptr1 = (char *) realloc(ptr1, (6, sizeof(char)));
    else if (ptr1[0] == 'b' && ptr1[1] == 'l' && ptr1[2] == 'u' && ptr1[3] == 'e')
        ptr1 = (char *) realloc(ptr1, (4, sizeof(char)));

    if (ptr2[0] == 'r' && ptr2[1] == 'e' && ptr2[2] == 'd') 
        ptr2 = (char *) realloc(ptr2, (3, sizeof(char)));
    else if (ptr2[0] == 'y' && ptr2[1] == 'e' && ptr2[2] == 'l' && ptr2[3] == 'l' && ptr2[4] == 'o' && ptr2[5] == 'w')
        ptr2 = (char *) realloc(ptr2, (6, sizeof(char)));
    else if (ptr2[0] == 'b' && ptr2[1] == 'l' && ptr2[2] == 'u' && ptr2[3] == 'e')
        ptr2 = (char *) realloc(ptr2, (4, sizeof(char)));

    if (ptr1 == ptr2) 
        printf("%s\n", ptr1);
    else if ((ptr1 == "red" || ptr1 == "yellow") && (ptr2 == "red" || ptr2 == "yellow")) 
        printf("orange\n");
    else if ((ptr1 == "red" || ptr1 == "blue") && (ptr2 == "red" || ptr2 == "blue"))
        printf("purple\n");
    else if ((ptr1 == "yellow" || ptr1 == "blue") && (ptr2 == "yellow" || ptr2 == "blue")) 
        printf("green\n");
    else
        printf("error\n");
    free(ptr1);
    free(ptr2);
    return 0;
}


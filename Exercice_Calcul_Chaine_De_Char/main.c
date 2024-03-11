#include <stdio.h>

int stringLength(char *c_cara) {

    int length = 0;
    while (*c_cara != '\0') {  // null == '\0'
        length++;
        c_cara++;
    }
    return length;
}

int main() {

    char c_cara[] = "azertyuiopqsdfghjklmwxcvbngjw9qsdfghjklmgjw9azertyuiop";
    printf("La taille de \"%s\" est : %d", c_cara, stringLength(c_cara));

    return 0;
}

// q2: 2356 - Bacteria 1
#include <stdio.h>
#include <string.h>

int main() {
    char D[101];
    char S[101];
    
    while (scanf("%s %s", D, S) != EOF) {
        if (strstr(D, S) != NULL) {
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }
    
    return 0;
}
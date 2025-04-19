// ONE  TWO  THEREE

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char palavra[10];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%s", palavra);
        int len = strlen(palavra);
        
        if (len == 3) {
            int dif_one = 0;
            if (palavra[0] != 'o') dif_one++;
            if (palavra[1] != 'n') dif_one++;
            if (palavra[2] != 'e') dif_one++;
            
            int dif_two = 0;
            if (palavra[0] != 't') dif_two++;
            if (palavra[1] != 'w') dif_two++;
            if (palavra[2] != 'o') dif_two++;
            
            if (dif_one <= 1) {
                printf("1\n");
            } else if (dif_two <= 1) {
                printf("2\n");
            }
        } else if (len == 5) {
            int dif_three = 0;
            if (palavra[0] != 't') dif_three++;
            if (palavra[1] != 'h') dif_three++;
            if (palavra[2] != 'r') dif_three++;
            if (palavra[3] != 'e') dif_three++;
            if (palavra[4] != 'e') dif_three++;
            
            if (dif_three <= 1) {
                printf("3\n");
            }
        }
    }
    
    return 0;
}
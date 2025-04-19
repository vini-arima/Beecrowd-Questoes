// q3: 1941  - Palindromo  
#include <stdio.h>
#include <string.h>
int palimodro(char S[], int N){
    for (int i = 0; i < N / 2; i++) {
        if (S[i] != S[N - i - 1]) {
            return 0; 
        }
    }
    return 1 ;
}

int main(){
    char S[2000] ; 
    
    scanf("%s", S ) ;
    
    if(palimodro(S , 3)){
        printf("e palimodro") ; 
    } 
    else {
        printf("Nao e palimodro") ;
    }
}
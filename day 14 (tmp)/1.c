#include <stdio.h>

int main() {
    char current_alphabet = 'a';  
    int step = 2;  


    do {
       
        printf("%c ", current_alphabet);

        current_alphabet += step;

    } while (current_alphabet <= 'z');

    printf("\n");
}
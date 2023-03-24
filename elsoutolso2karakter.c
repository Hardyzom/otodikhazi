#include <stdio.h>
#include <string.h>

void elsoutolso2karakter(char* str) {
    int a = strlen(str);
    if (a < 5) {
        printf("Hiba: a bemeneti sztring hossza kisebb, mint 5.\n");
    } 
    else{
            printf("Első két karakter: %c%c\n", str[0], str[1]);
            printf("Utolsó két karakter: %c%c\n", str[a-2], str[a-1]);
        }
    
}

int main() {
    char str1[] = "Szia üdvözleeeeeek!";
    elsoutolso2karakter(str1);

    return 0;
}

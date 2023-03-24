#include <stdio.h>
#include <string.h>

int rfind_char(char* s, char c) {
    int a = strlen(s);
    for(int i = a - 1; i >= 0; i--) {
        if(s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", rfind_char("Abba", 'b'));
    printf("%d\n", rfind_char("Abba", 'a'));
    printf("%d\n", rfind_char("Abba", 'x'));
    printf("%d\n", rfind_char("Aladar", 'a'));
    return 0;
}

#include <stdio.h>
#include <string.h>

int karakter_megszam(char* s, char c) {
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[] = "Abba";
    char str2[] = "Abba";
    char str3[] = "Abba";

    printf("'%c' karakter előfordulása a '%s' sztringben: %d\n", 'b', str1, karakter_megszam(str1, 'b'));
    printf("'%c' karakter előfordulása a '%s' sztringben: %d\n", 'a', str2, karakter_megszam(str2, 'a'));
    printf("'%c' karakter előfordulása a '%s' sztringben: %d\n", 'x', str3, karakter_megszam(str3, 'x'));

    return 0;
}

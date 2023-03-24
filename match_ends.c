#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*
Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.
Példák (Python kóddal, majd át kell írni C-be):
match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1
*/

int match_ends(int n, string words[]) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int length = strlen(words[i]);
        if (length >= 2 && words[i][0] == words[i][length-1]) {
            ++count;
        }
    }
    return count;
}


int main()
{
    string words[] = { "aba", "xyz", "aa", "x", "bbb" };
    int words_meret = 5;

    // match_ends() meghívása itt...
    int eredmeny = match_ends(words_meret, words);
    printf("Ennyi szó palindrom: %d\n", eredmeny);

    

    return 0;
}
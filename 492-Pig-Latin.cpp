#include <stdio.h>

using namespace std;



int main() {
    bool    is_word;
    bool    vowel;
    char    c;
    char    k;  // keep the first letter of consonant-words

    is_word = false;
    scanf("%c", &c);

    while (c != -1) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!is_word) { // First letter of a word
                is_word = true;
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
                 || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                     vowel = true;
                     printf("%c", c);
                 }
                else {
                    vowel = false;
                    k = c;
                }
            }
            else    printf("%c", c);
        }
        else if (is_word) { // First letter after the last letter of a word
            if (vowel == false) printf("%c", k);
            printf("ay%c", c);
            is_word = false;
        }
        else    printf("%c", c);

        c = -1;
        scanf("%c", &c);
    }

    return(0);
}

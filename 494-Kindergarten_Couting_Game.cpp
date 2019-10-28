#include <iostream>
#include <string>

using namespace std;



int main() {
    string  s;
    int     w;  // number of words
    bool    is_word;

    while (getline(cin, s)) {
        w = 0;
        is_word = false;

        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))   is_word = true;
            else if (is_word) {
                w++;
                is_word = false;
            }
        }

        if (is_word)    w++;
        cout << w << endl;
    }

    return(0);
}

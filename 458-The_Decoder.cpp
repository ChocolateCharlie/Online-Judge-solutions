#include <iostream>
#include <string>

using namespace std;



int main() {
    string  s;

    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++)
            cout << (char) (s[i] - 7);
        cout << "\n";
    }

    return(0);
}

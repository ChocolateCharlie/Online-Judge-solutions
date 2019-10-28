/**
 * Binary Exponentiation
 * See : https://cp-algorithms.com/algebra/binary-exp.html
 */
#include <iostream>

using namespace std;



int main() {
    long long   c;
    long long   x;
    long long   y;
    long long   n;
    long long   z;

    cin >> c;

    while (c--) {
        cin >> x >> y >> n;

        z = 1;
        x %= n;

        while(y) {
            if (y & 1)  z = z * x % n;
            x = x * x % n;
            y >>= 1;
        }

        cout << z << endl;
    }

    return(0);
}

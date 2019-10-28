#include <iostream>

using namespace std;



int main() {
    int     n;  // number of test cases
    int     f;  // number of farmers
    int     s;  // size of the farmyard in m^2
    int     a;  // number of animals
    int     e;  // environment-friendliness
    int     b;  // summed burden for Germany's budget

    cin >> n;

    while(n--) {
        b = 0;
        cin >> f;

        while (f--) {
            cin >> s >> a >> e;
            b += (s * e);
        }

        cout << b << endl;
    }

    return(0);
}

#include <stdio.h>
#define ISIZE   25  // image size

using namespace std;



int main() {
    int     n;
    char    c;
    int     tv; // total number of void
    int     rv; // number of void in the current row
    int     mv; // minimal number of void

    scanf("%d%*c", &n);

    while (n) {
        tv = 0;
        mv = ISIZE;

        for (int i = 0; i < n; i++) {
            rv = 0;

            for (int j = 0; j <= ISIZE; j++) {
                scanf("%c", &c);

                if (c == ' ') {
                    tv++;
                    rv++;
                }
            }

            if (rv < mv)    mv = rv;
        }

        printf("%d\n", tv - (mv * n));

        scanf("%d", &n);
    }

    return(0);
}

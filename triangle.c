/* Codeiq : mod 2015/04/20
 *
 * return the number of patterns to meet the conditions below:
 * - 1 <= a <= b <= c <= n
 * - 1 <= n <= 10000
 * - a,b and c are the length of sides of a triagle
 * sample:
 * - input data: 3
 * supposed output: 7
 */
#include <stdio.h>

int main() {
    int n, count;
    int i,j,k;
    printf ("input number: ");
    scanf("%d", &n);
    count = 0;

    // check patterns
    for (k=1; k<=n; k++) {
        for (j=1; j<=k; j++) {
            for (i=1; i<=j; i++) {
                if (k < i+j) {
                    count++;
                }
            }
        }
    }

    printf ("%d\n", count);
}

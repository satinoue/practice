/* Codeiq 314 : mod 2015/03/21
 *
 * return the numbers so that sum of the fractions,
 * that have 1 as the numerator and each number as the denominator,
 * equals the fraction represented by the input data.

 * input data:
 * 3 <- data length
 * 3 5
 * 5 7
 * 1 3
 *
 * supposed output:
 * 2 10
 * 2 10 70
 * 4 12
 */
#include <stdio.h>

void getPear(int m, int n);

int main() {
    int len, x, y, i;
    printf ("length: ");
    scanf("%d", &len);
    int input[len][2];

    // get input data
    printf ("input data:\n");
    for (i=0; i<len; i++) {
        scanf("%d%d", &x, &y);
        input[i][0] = x;
        input[i][1] = y;
    }
    // call function to print answers
    printf ("answer is:\n");
    for (i=0; i<len; i++) {
        getPear(input[i][0],input[i][1]);
    }
    return 1;
}

void getPear(int m, int n) {
    int s = m, t = n;
    int ret[m*n];

    int i=2; int k=0;
    do {
        // ex. s=3,t=5
        // if 3*2 > 5 => 3/5 > 1/2
        if (s*i > t) {
            s = s*i - t;
            t = t*i;
            ret[k] = i; k++;
        }
        i++;
    } while (t == n || s != 1);
    ret[k] = t;

    // print the answer
    for (i=0; i<=k; i++) {
        printf ("%d ", ret[i]);
    }
    printf ("\n");
    return;
}

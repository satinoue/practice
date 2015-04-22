/* Codeiq : mod 2015/04/22
 *
 * input p,q,r
 * return a,b,c,d
 *
 * so that
 * px^2 + qx + r = (ax + b) (cx + d)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[128], *n1, *n2, *n3;
    int p,q,r;
    printf ("input data: ");
    scanf("%s", str);

    // get data
    n1 = strtok (str,  ","); p = atoi (n1);
    n2 = strtok (NULL, ","); q = atoi (n2);
    n3 = strtok (NULL, ","); r = atoi (n3);

    // make list 
    int list1[2][p/2];
    int list2[2][r/2];
    int i,j,count;
    int l1=p; int l2=r;

    count = 0;
    for (i=1;i<l1;i++) {
        if (p%i == 0) {
            list1[count][0] = i;
            list1[count][1] = p/i; l1 = p/i;
            count++;
        }
    }
    l1 = count;
    count = 0;
    for (j=1;j<l2;j++) {
        if (r%j == 0) {
            list1[count][0] = j;
            list1[count][1] = r/j; l2 = r/j;
            count++;
        }
    }
    l2 = count;

    /* check patterns
    for (i=1; i<l1; i++) {
        for (j=1; j<=l2; j++) {
            if (list1[i][0] 
        }
    }*/

    printf ("%d %d %d\n", p,q,r);
}

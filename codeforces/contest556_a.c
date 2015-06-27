/* 2015/06/27
 * Codeiq : mod 2015/04/22
 * http://codeforces.com/contest/556/problem/A
 *
 * input len, string([0,1]*)
 * return n (=length remain after the operation)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char len[10], dat[128];
    int i, l, count = 0;
    //printf ("input length: ");
    scanf("%s", len);
    //printf ("input data: ");
    scanf("%s", dat);

    // get data
    l = atoi (len);
    for (i=0; i<l; i++) {
        if (dat[i] == '1') {
            count++;
        }
    }
    int ret = 0; int min = count;
    if (count * 2 > l) {
        min = l - count;
    }
    ret = l - min * 2;
    printf ("%d", ret);
    return ret;
}

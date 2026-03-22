/* Sastny-Legchin Vladislav, Group 11, FPMI */
/* main.c — counts 6-digit lucky numbers    */

#include <stdio.h>
#include "lucky.h"

int
main(void)
{
        int     n;
        int     count = 0;

        for (n = 100000; n <= 999999; n++) {
                if (is_lucky(n))
                        count++;
        }
        printf("Lucky 6-digit numbers count: %d\n", count);
        return 0;
}

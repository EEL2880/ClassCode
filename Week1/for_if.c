/* example looping program */

#include <stdio.h>

int main(void)
{
    int i;

    char ch = 'A';

    char AB[]="This is my char array string\n";
    printf("Char array %s\n", AB);

    printf("Char = %c\n", ch);
    /* printf("Char value = 0x%x\n", ch); */
    /* printf("Char value = 0%d\n", ch); */

    for (i = 0; i < 25; i++)
    {
        ch++;

        if (i<12) {
            printf("Char = %c\n", ch);
          //  printf("Char value = 0x%x\n", ch);
        }
        else {
            printf("Char = %c\n", ch+0x20);
            /* printf("Char value = 0x%x\n", ch+0x20); */

        }
    }
    return 0;
}

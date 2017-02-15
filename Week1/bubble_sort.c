#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int count;
    int temp;
    int array[10];

    srand(time(NULL));

    printf("Press enter to fill the array with values\n");
    getchar();

    for (i = 0; i < 10; i++) {
        array[i] = rand() % 100;
    }

    for (i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    printf("Press enter to sort the array\n");
    getchar();

    for (count = 0; count < 10; count++) {
        for (i = 0; i < 9; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}

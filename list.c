#include <stdlib.h>
#include <stdio.h>
// we are resizing the array in this file//

int main(void)
{
    int *list = malloc(3 * sizeof(int));  //we used size of an int cuz 3 gonna multiply size of int and gives me 12 spaces in memory//
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int)); // we used this suppose we forgot now we need more memory so we did this//
    if (tmp == NULL)
    {
        free(list);        // we have to free the early memory first so this code won't abort//
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];   // it gonna copy the data of first array into this size of an array.//
    }

    tmp[3] = 4; // we just put the value of 4 into the array//
    free(list);
    list = tmp;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}
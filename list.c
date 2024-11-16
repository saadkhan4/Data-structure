#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
  
// this is the code of prepending data structure.//

typedef struct node
{
    int number;                           // basic intergers//
    struct node *next;                    // this means to point to other nodes//
} node;

int main(int argc, char *argv[])
{

    node *list = NULL;                    //best way to start the linked list//
    for (int i = 0; i < argc; i++)
    {
        int number = atoi(argv[i]);       //just to put the values in argv & atoi is convert the number into string from their integer value.//

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            //free memory thus far//
            return 1;
        }
        n->number = number;               // n-> go to chunk of memory and update that number & =number is what the human type for on line no: 17.//
        n->next = list;                   // it is pointing on the next list//
        list = n;                         // now it update the list to point n//
    }
  // print whole list///
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}



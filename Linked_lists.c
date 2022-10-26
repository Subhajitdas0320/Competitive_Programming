#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nextPtr;
};
typedef struct node nd;

// Function Prototypes
void insert(nd **sPtr, int value);
void delete (nd **sPtr);
void display(nd **sPtr);

int main()
{
    nd *startPtr = NULL;

    display(&startPtr);
    printf("\n\n");

    delete (&startPtr);
    printf("\n\n");

    insert(&startPtr, 5);
    insert(&startPtr, 2);
    insert(&startPtr, 8);

    display(&startPtr);
    printf("\n\n");

    delete (&startPtr);
    display(&startPtr);

    return 0;
}
void insert(nd **sPtr, int value)
{
    nd *newNode = malloc(sizeof(nd));
    newNode->data = value;
    newNode->nextPtr = NULL;

    nd *currentPtr = *sPtr;

    if (newNode != NULL)
    {
        if (currentPtr == NULL)
        {
            *sPtr = newNode;
        }
        else
        {
            while (currentPtr->nextPtr != NULL)
            {
                currentPtr = currentPtr->nextPtr;
            }
            currentPtr->nextPtr = newNode;
        }
    }
    else
    {
        printf("Unable to add node");
    }
}
void delete (nd **sPtr)
{
    nd *currentPtr = *sPtr;
    nd *previousPtr;

    if (currentPtr == NULL)
    {
        printf("Empty list..");
    }
    else if (currentPtr->nextPtr == NULL)
    {
        *sPtr = NULL;
        free(currentPtr);
    }
    else
    {
        previousPtr = currentPtr;
        while (currentPtr->nextPtr != NULL)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        previousPtr->nextPtr = NULL;
        free(currentPtr);
    }
}
void display(nd **sPtr)
{
    nd *currentPtr = *sPtr;
    if (currentPtr == NULL)
    {
        printf("Empty list..");
    }
    else
    {
        while (currentPtr->nextPtr != NULL)
        {
            printf("%d ->", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("%d ->", currentPtr->data);
    }
}
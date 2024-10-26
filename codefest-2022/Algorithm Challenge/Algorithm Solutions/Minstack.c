// Using Dynamic arrays to Implement minstack
// Linked list or static arrays can also be used but there pros and cons with each Data Structure used

#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 8

typedef int len_t;

/**
* struct _minstack- stack of integers
* @capacity: capacity of stack
* @size: size of stack
* @arr: pointer to stack array
* @top: top of stack
* @minarr: stack of the minimum value at every point
*/
typedef struct _minStack
{
    int *arr;
    int *minarr;

    len_t capacity;
    len_t size;
    len_t top;

}minStack;

minStack *MyStack(void)
{
    minStack *s = (minStack *)malloc(sizeof(minStack));
    s->arr = (int *)malloc(sizeof(int) * INIT_SIZE);
    s->minarr = (int *)malloc(sizeof(int) * INIT_SIZE);
    s->capacity = INIT_SIZE;
    s->top = -1;
    s->size = 0;
    return (s);
}

void push(minStack *s, int val)
{
    //Resize array if needed
    if (s->size == s->capacity)
    {
        s->arr = (int *)realloc(s->arr, sizeof(int) * s->capacity * 2);
        s->minarr = (int *)realloc(s->minarr, sizeof(int) * s->capacity * 2);
        s->capacity *= 2;
    }

    s->arr[s->size] = val;
    if (s->size && val >= s->minarr[s->size - 1])
        s->minarr[s->size] = s->minarr[s->size - 1];
    else
        s->minarr[s->size] = val;
    s->top = s->size;
    s->size++;
}

void pop(minStack *s)
{
    s->size--;
    s->top--;

    //resize array if needed
    if (s->size <= s->capacity / 4)
    {
        s->arr = (int *)realloc(s->arr, sizeof(int) * s->capacity / 2);
        s->minarr = (int *)realloc(s->minarr, sizeof(int) * s->capacity / 2);
        s->capacity /= 2;
    }
}

void printstack(minStack *s)
{
    int top = s->top;

    printf("       \tStack\t \t        \tMinstack\n\n");
    printf("top --->|\t%i\t|\ttop --->|\t%i\t|\n", s->arr[top], s->minarr[top]);
    for (int i = top - 1; i >= 0; i--)
        printf("        |\t%i\t|\t        |\t%i\t|\n", s->arr[i], s->minarr[i]);
}


int main (void)
{
    minStack *s = MyStack();
    push(s, 7);
    push(s, 89);
    push(s, 9);
    push(s, 8);
    push(s, 59);
    push(s, 0);
    push(s, 87);
    push(s, 77);
    push(s, 45);

    pop(s);
    pop(s);

    //printf("\t%i\n", s->arr[s->top]);

    printstack(s);

    return (0);
}
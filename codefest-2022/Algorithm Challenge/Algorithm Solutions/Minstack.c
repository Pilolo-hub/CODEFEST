#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 5
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
    int capacity;
    int size;
    int *arr;
    int *top;
    int *minarr;

}minStack;

minStack *MyStack(void)
{
    minStack *s = (minStack *)malloc(sizeof(minStack));
    s->arr = (int *)malloc(sizeof(int) * INIT_SIZE);
    s->minarr = (int *)malloc(sizeof(int) * INIT_SIZE);
    s->capacity = INIT_SIZE;
    s->top = NULL;
    s->size = 0;
    return (s);
}

void push(minStack *s, int val)
{
    s->arr[s->size] = val;
    if (s->size && val >= s->minarr[s->size - 1])
        s->minarr[s->size] = s->minarr[s->size - 1];
    else
        s->minarr[s->size] = val;
    s->top = &s->arr[s->size];
    s->size++;
}


int main (void)
{
    return (0);
}
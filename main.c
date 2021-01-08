#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
  int arr[5];
  int top;
}st;

void stack_init(st* s)
{
    s->top=-1;
}

void stack_push(st* s, int data)
{
    if(s->top == 4)
    {
        printf("Full\n");
    }
    else
    {
        s->top++;
        s->arr[ s->top] = data;
    }
}

void stack_pop(st* s)
{
    int data;
    if(s->top == -1)
    {
        printf("Empty\n");
    }
    else
    {
        data = s->arr[ s->top];
        s->top--;
    }
    return data;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}

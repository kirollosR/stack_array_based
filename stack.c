#include "stack.h"
#include <stdio.h>

void CreateStack (StackType *s)
{
    s->top=-1;
}

int StackEmpty (StackType s)
{
    return(s.top==-1);
}

int StackFull(StackType s)
{
    return(s.top==MAX-1);
}

void Push (EntryType item,StackType *s)
{
    if(s->top==MAX-1)
        printf("Error: Stack Overflow\n");
    else
        s->entry[++s->top]=item;
}

void Pop (EntryType *item,StackType *s)
{
    if(s->top==-1)
        printf("Error: Stack underflow\n");
    else
        *item=s->entry[s->top--];
}

int StackSize(StackType *s)
{
    return((s->top)+1);
}


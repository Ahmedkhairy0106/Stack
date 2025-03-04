#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 10

typedef char EntryType;
typedef struct{
    int top;
    EntryType entry[MAX];
}Stack;

void initialize(Stack *s);
int is_empty(Stack s);
int is_full(Stack s);
void push (Stack *s, EntryType item);
EntryType pop(Stack *s);
int stack_size(Stack s);
void copy_stack(Stack *src, Stack *dest);
void destroy_stack(Stack *s);
void print_stack(Stack *s);
void print_CopyStack(Stack *s);
#endif // STACK_H_INCLUDED


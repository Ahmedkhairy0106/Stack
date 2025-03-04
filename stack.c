#include <stdio.h>
#include "stack.h"

void initialize(Stack *s) {
    s->top = -1;
}

int is_empty(Stack s) {
    return s.top == -1;
}

int is_full(Stack s) {
    return s.top == MAX - 1;
}

void push(Stack *s, EntryType item) {
    if (is_full(*s)) {
        printf("Stack is full yasta\n");
        return;
    }
    s->top++;
    s->entry[s->top] = item;
}

EntryType pop(Stack *s) {
    if (is_empty(*s)) {
        printf("Stack is empty yasta\n");
        return '\0';
    }
    return s->entry[(s->top)--];
}

int stack_size(Stack s) {
    return s.top + 1;
}


void copy_stack(Stack *src, Stack *dest) {
    dest->top = src->top;
    for(int i = src->top; i >= 0; i--){
        dest->entry[i] = src->entry[i];
    }
}

void print_stack(Stack *s){
    if(is_empty(*s)){
        printf("Stack is empty!");
    }
    else{
        printf("Stack elements: ");
        for(int i = s->top; i >= 0; i--){
            printf("%d", s->entry[i]);
        }
        printf("\n");
    }
}

void print_CopyStack(Stack *s){
    if(is_empty(*s)){
        printf("Stack is empty!");
    }
    else{
        printf("Stack elements: ");
        for(int i = s->top; i >= 0; i--){
            printf("%d", s->entry[i]);
        }
        printf("\n");
    }
}

void destroy_stack(Stack *s){
    s->top = -1;
}

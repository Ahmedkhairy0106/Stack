#include <stdio.h>
#include "stack.h"

void menu() {
    Stack s, copyStack; // Two stacks: one for operations, one for copy
    initialize(&s);
    initialize(&copyStack);

    int choice, value;

    do {
        printf("\n===== Stack Menu =====\n");
        printf("1. Read and Push\n");
        printf("2. Pop\n");
        printf("3. Stack Size\n");
        printf("4. First Element (Top)\n");
        printf("5. Last Element (Bottom)\n");
        printf("6. Copy Stack\n");
        printf("7. Destroy Stack\n");
        printf("8. Print Stack\n");
        printf("9. Print Copy Stack\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push element
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2: // Pop element
                if (!is_empty(s)) {
                    value = pop(&s);
                    printf("Popped value: %d\n", value);
                } else {
                    printf("Stack is empty!\n");
                }
                break;
            case 3: // Get size
              printf("Stack size: %d\n", stack_size(s));
                break;
            case 4: // Get first (top) element
                if (!is_empty(s)) {
                    printf("First element (Top): %d\n", s.entry[s.top]);
                } else {
                    printf("Stack is empty!\n");
                }
                break;
            case 5: // Get last (bottom) element
                if (!is_empty(s)) {
                    printf("Last element (Bottom): %d\n", s.entry[0]);
                } else {
                    printf("Stack is empty!\n");
                }
                break;
            case 6: // Copy stack
                copy_stack(&s, &copyStack);
                printf("Stack copied successfully!\n");
                break;
            case 7: // Destroy stack
                destroy_stack(&s);
                printf("Stack destroyed!\n");
                break;
            case 8: // Print stack
                print_stack(&s);
                break;
            case 9:
                print_CopyStack(&copyStack);
                break;
            case 10: // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again!\n");
        }
    } while (choice != 9);
}

int main() {
    menu();  // Run the stack menu
    return 0;
}

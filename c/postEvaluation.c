#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Stack implementation
#define MAX_STACK_SIZE 100

typedef struct {
    double data[MAX_STACK_SIZE];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Push an element onto the stack
void push(Stack* stack, double value) {
    if (stack->top < MAX_STACK_SIZE - 1) {
        stack->data[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}

// Pop an element from the stack
double pop(Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    } else {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
}

// Check if a string is numeric
int isNumeric(const char* str) {
    char* end;
    strtod(str, &end);
    return end != str && *end == '\0';
}

// Apply an operator on two operands
double applyOperator(double operand1, double operand2, char operator) {
    switch (operator) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default:
            printf("Invalid operator: %c\n", operator);
            exit(EXIT_FAILURE);
    }
}

// Evaluate postfix expression
double evaluatePostfix(const char* expression) {
    Stack stack;
    initStack(&stack);

    char exprCopy[256];
    strncpy(exprCopy, expression, sizeof(exprCopy));
    exprCopy[sizeof(exprCopy) - 1] = '\0'; // Ensure null-terminated

    char* token = strtok(exprCopy, ",");

    while (token != NULL) {
        if (isNumeric(token)) {
            push(&stack, atof(token));
        } else if (strlen(token) == 1 && strchr("+-*/", token[0])) {
            if (stack.top < 1) {
                printf("Invalid postfix expression: not enough operands for operator %s\n", token);
                return -1;
            }
            double operand2 = pop(&stack);
            double operand1 = pop(&stack);
            double result = applyOperator(operand1, operand2, token[0]);
            push(&stack, result);
        } else {
            printf("Invalid token: %s\n", token);
            return -1;
        }
        token = strtok(NULL, ",");
    }

    if (stack.top != 0) {
        printf("Invalid postfix expression: too many operands\n");
        return -1;
    }

    return pop(&stack);
}

int main() {
    // Example: Ensure the postfix expression is valid
    const char* postfix = "5,6.2,+,*,12,4,/"; // Correct input

    // Evaluate the postfix expression
    double result = evaluatePostfix(postfix);

    // Print the result
    if (result != -1) {
        printf("Result: %.2f\n", result);
    } else {
        printf("Failed to evaluate the postfix expression.\n");
    }

    return 0;
}

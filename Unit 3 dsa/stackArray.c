#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

void push()
{
    int n;

    if (top == MAXSIZE - 1)
    {
        printf("Stack is overflow");
    }
    else
    {
        printf("Enter an element: ");
        scanf("%d", &n);

        top++;
        stack[top] = n;
    }
}

void pop()
{
    int n;

    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        n = stack[top];
        top--;

        printf("Popped element = %d", n);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nElements of stack:");

         for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n-----------------------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n-----------------------");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Program exited.");
            break;

        default:
            printf("Invalid choice");
        }

    } while (choice != 4);

    return 0;
}
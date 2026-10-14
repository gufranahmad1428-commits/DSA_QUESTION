#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

void push()
{
    int n;
    if (top == MAXSIZE - 1)
    {
        printf("Stack is over flow");
    }
    else
    {
        printf("Enter  your element : ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void display()
{

    if (top == -1)
    {
        printf("Stack is empty");
    }

    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
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

int main()
{

    int choise;

    do
    {

        printf("\n----------------------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n----------------------");

        printf("\nEnter  your choise : ");
        scanf("%d", &choise);
        switch (choise)
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
    } while (choise != 4);
}
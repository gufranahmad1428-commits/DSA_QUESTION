#include <stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE], top = -1;

void push(){
    int n;
    if(top == MAXSIZE -1 ){
        printf("Stack is over flow");
    }
    else{
        printf("Enter a inset valu");
        scanf("%d",&n);

        top++;
        stack[top] = n;
        printf("Inser secufully");
    }
}

void pop(){
    int n;
    if(top ==-1){
        printf("Stack underflow");
    }
    else{
        n = stack[top];
        top--;

        printf("Delete element %d",n);
    }
}

void peek(){
    if(top ==-1){
        printf("Stack underflow");
    }
    else{
        printf("Top Element%d",stack[top]);
    }
}

void display(){
    if(top ==-1){
        printf("Stack underflow");
    }
    else{
        printf("Display Element\n");
        for(int i=top; i>=0; i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n----------STACK----------\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("-----------------------------\n");
        printf("Enter a Choice: ");
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
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Program Exit");
            break;

        default:
            printf("invelid choice");
        }
    } while (choice != 5);
}
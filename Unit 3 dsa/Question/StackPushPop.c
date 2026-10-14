#include<stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE], top = -1;

void push(int valu){
    if(top == MAXSIZE -1){
        printf("Stack is over folw");
    }
    else{
        top++; 
        stack[top] = valu;
        printf("push secfullay %d\n",valu);
    }
}

void pop(){
    if(top == -1){
        printf("Stack is under flow");
    }
    else{
        printf("Popped %d\n",stack[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Stack is under flow");
    }
    else{
        printf("top element %d\n",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is under flow");
    }
    else{
        printf("Dispay Stack element\n");
        for(int i=top; i>=0; i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
}

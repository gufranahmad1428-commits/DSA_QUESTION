// Write a C program to implement a Linear Queue using an array. Perform the following operations:
// 1.Insert 10, 20, and 30 into the queue.
// 2.Delete two elements from the Front.
// 3.Insert 40 into the Rear.
// Display the remaining elements.

#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear = -1, front = -1;
void insert(int value)
{
    if(rear == MAXSIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("Insert %d\n", value);
    }
}
void Delete(){
    if(rear == -1 || front>rear){
        printf("Queue is Empty");
    }
    else{
        printf("Delete %d\n",queue[front]);
        front++;
    }
}

void display(){
    if(rear == -1 || front>rear){
        printf("Queue is Empty");
    }

    else{
        printf("Display Queue: ");
        for(int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    Delete();
    insert(40);
    display();

}
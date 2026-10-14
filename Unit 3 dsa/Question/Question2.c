// Write a C program to implement a Circular Queue using an array of size 5. Perform the following operations:
// 5.Insert 10, 20, 30, and 40.
// 6.Delete two elements from the Front.
// 7.Insert 50 and 60 into the queue.
// 8.Display the elements of the Circular Queue.

#include<stdio.h>
#define MAXSIZE 10
int cq[MAXSIZE];
int rear = -1, front = -1;
void insert(int value)
{
    if((rear + 1)% MAXSIZE == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % MAXSIZE;
        cq[rear] = value;

        printf("Insert %d\n", value);
    }
}
void Delete(){
    if(rear == -1 || front>rear){
        printf("Queue is Empty");
    }
    else{
        printf("Delete %d\n",cq[front]);
        front = (front + 1) % MAXSIZE;
    }
}

void display(){
    if(rear == -1 || front>rear){
        printf("Queue is Empty");
    }

    else{
        printf("Display Queue: ");
        for(int i=front; i<=rear; i++){
            printf("%d ",cq[i]);
        }
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    // Delete();
    // insert(40);
    // display();

}
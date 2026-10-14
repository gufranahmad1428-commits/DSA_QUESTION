#include<stdio.h>
#define MAXSIZE 10
int cq[MAXSIZE];
int rear = -1, front = -1;

void insert(){
    int n;
    if((rear + 1) % MAXSIZE == front){
        printf("Over flow\n");
    }
    else{
        printf("Enter a insert valu : ");
        scanf("%d",&n);

        if(rear == -1 && front == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % MAXSIZE;
        }
        cq[rear] = n;
    }

}

void Delete(){
    int n;
    if(rear == -1 && front == -1){
        printf("Queue is empty\n");
    }
    else{
        n = cq[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1 )%MAXSIZE;
        }
        printf("Delete queue %d\n",n);
    }

}

void display(){
    int i;
    if(rear == -1 && front == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Element of Queue\n");
        for(i=front; i!=rear; i = (i+1)%MAXSIZE){
            printf("%5d",cq[i]);
        }
        printf("%5d",cq[i]);
    }

}

int main(){
    int choice;
    do
    {
    printf("----------Circular Queue----------");
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\n--------------------");

    printf("\nEnter a Choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        Delete();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("Program are Exit :");
        break;
    
    default:
        printf("Invalid choice");
    }

    } while (choice != 4 );
    
}
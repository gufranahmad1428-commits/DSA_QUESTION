#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear = -1, front = -1;
int insert(int valu){
    if (rear == MAXSIZE -1)
    {
        printf("Queue is over flow\n ");
    }
    else{
        if(front == -1){
            front = 0;

            rear++;
            queue[rear] = valu;
            printf("Enqueue %d\n",queue[rear]);
        }
    }
    
}

void Delete(){
    if(front == -1 || front>rear){
        printf("Queue is Empty\n");
    }

    else{
        printf("Dequeue %d\n",queue[front]);
        front++;

    }
}

void display(){
    if(front == -1 || front>rear){
        printf("Queue is Empty\n");
    }

    else{
        printf("Display Queue Element\n");
        for(int i=front; i<=rear; i++){
            printf("%d",queue[i]);
        }
    }
}
int main(){
    insert(10);
    insert(20);
    insert(20);
    Delete();
    display();


}
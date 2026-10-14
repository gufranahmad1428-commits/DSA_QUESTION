#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear = -1, front = 0;
void insert(){
    int n;
    if(rear == MAXSIZE -1){
        printf("Queue is over flow ");
    }
    else{
        printf("Enter an Element : ");
        scanf("%d",&n);

        rear++;
        queue[rear] = n;
    }

}

void delete(){
    int n;
    if(front > rear){
        printf("Queue is Empty");
    }
    
    else{
        n = queue[front];
        front++;
        printf("Delete Elemnet %d", n); 
    }

}

void display(){
    if(front > rear){
        printf("Queue is Empty");
    }
    else{
        printf("\nElements of stack:");

        for(int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }

}
int main()
{
    int choice;
    do
    {
        printf("\n----------Queue----------");
        printf("\n1. Insert ");
        printf("\n2. Deletr");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n----------------------");

        printf("\nEnter  your choise : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
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
}
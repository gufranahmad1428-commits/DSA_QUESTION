#include<stdio.h>
int main(){
    int arr[100] , n , InsPos , InsVal ,DelPos;

    printf("Enter a num of Size of Array : ");
    scanf("%d",&n);

    printf("Enter %d Array Value\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter a num Insert Possition : ");
    scanf("%d",&InsPos);

    printf("Enter a Insert Valu : ");
    scanf("%d",&InsVal);

    for(int i=n; i>=InsPos; i--){
        arr[i] = arr[i - 1];
    }
    arr[InsPos - 1] = InsVal;
    n++;

    printf("\nAfter Insertion\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter a Deletion Position : ");
    scanf("%d",&DelPos);

    for(int i=DelPos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("\nAfter Deletion\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
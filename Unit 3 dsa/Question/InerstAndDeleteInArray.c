#include<stdio.h>

int main(){
    int arr[100] , n, InsPos , InsVal , DelPos;

    printf("Enter Number of Element of Array : ");
    scanf("%d",&n);

    printf("Enter a size of Array\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter a Insert Positen : ");
    scanf("%d",&InsPos);
    
    printf("Enter A Insert Value : ");
    scanf("%d",&InsVal);

    for(int i=n; i>=InsPos; i--){
        arr[i] = arr[i - 1];
    }
    arr[InsPos -1] = InsVal;
    n++;

    printf("After Insert Value\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter a Delete Position : ");
    scanf("%d",&DelPos);

    for(int i=DelPos-1; i<n-1; i++){
        arr[i] = arr[i + 1];
    }
    n--;

     printf("After Deletion Value\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}
#include<stdio.h>
int main(){
    int arr[100] , n , InsPos , InsVal , DelPos;
    printf("Enter a num size of array");
    scanf("%d",&n);

    printf("\nEnter a Element of Array\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\n Enter a position in insert value : ");
    scanf("%d",&InsPos);

    printf("\nEnter insert value :");
    scanf("%d",&InsVal);

    //sifte of element of right side 
    for(int i=n; i>=InsPos; i--){
        arr[i] = arr[i -1];
    }
    arr[InsPos -1] = InsVal;
    n++;
    printf("\nAfter insert in array\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter Delete Postion : ");
    scanf("%d",&DelPos);

    for(int i=DelPos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("\nAfter Deletion in array\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
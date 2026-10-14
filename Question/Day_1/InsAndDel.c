#include<Stdio.h>
int main(){
    int arr[100] , n , InsPos , InsVal , DelPos;

    printf("Enter a num Size of Array : ");
    scanf("%d",&n);

    printf("\nEnter a Elemnet of Array.\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]); 
    }

    printf("\nEnter a Insert Position : ");
    scanf("%d",&InsPos);

    printf("\nEnter a Insert Value : ");
    scanf("%d",&InsVal);

    for(int i=n; i>=InsPos; i--){
        arr[i] = arr[i -1];
    }
    
    arr[InsPos - 1 ] = InsVal;
    n++;

    printf("\nAfter Insert Array\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter a Delection Position : ");
    scanf("%d",&DelPos);

    for(int i=DelPos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("\nAfter Deletion Array\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}
#include<stdio.h>

int main(){
    int arr[100] , n , pos;

    printf("Enter a Size of Array");
    scanf("%d", &n);

    printf("Enter a Element of Array \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter of delete position : ");
    scanf("%d",&pos);

    for(int i = pos -1; i<n-1; i++){
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    
}
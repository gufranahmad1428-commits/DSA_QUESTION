#include<stdio.h>
int main(){
    int n; 
    printf("Enter a size of Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter a Array Element : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }



    // int arr[5] = {1, 3, 5, 6, 8};
    // for(int i =0; i<5; i++){
    //     printf("%d ", arr[i]);
    // }
}
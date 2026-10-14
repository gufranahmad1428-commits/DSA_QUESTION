#include<stdio.h>
int main(){
    int n;
    printf("Enter a Size of Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter a N Element : ");

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
       
    }

    printf(" \n 1D Array : ");
    for(int i=0; i<n; i++){
        printf("%d  ", arr[i]);
        
    }
}
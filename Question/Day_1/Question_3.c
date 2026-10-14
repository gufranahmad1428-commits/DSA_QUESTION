#include<stdio.h>
int main(){
    int arr1[100] , arr2[100] , arr3[100];
    int n1 ,n2;
    printf("Enter a size of First Array.");
    scanf("%d",&n1);

    printf("Enter a element of first Array.\n");
    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter a size of Second Array.");
    scanf("%d",&n2);

    printf("Enter a element of Secont Array.\n");
    for(int i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0; i<n1; i++){
        arr3[i] = arr1[i];
    }

    for(int i=0; i<n2; i++){
        arr3[n1 + i] = arr2[i];
    }

    for(int i=0; i<n1+n2; i++){
        printf("%d ",arr3[i]);
    }
}
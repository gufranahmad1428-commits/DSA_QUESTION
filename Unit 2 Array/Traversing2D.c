#include<stdio.h>
int main(){
    int n , m;
    printf("Enter a row and column : ");
    scanf("%d%d",&n , &m);

    int arr[n][m];

    printf("Enter  Element of Array : \n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("  Element of Array  \n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    // int arr[2][5] ={
    //     {1 , 4, 2, 5, 7},
    //     {4, 5, 1, 7, 8 }
    // } ;
     
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<5; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
}
#include<stdio.h>
int main(){
    int a[10][10] , b[10][10] , c[10][10];
    int r , col;

    printf("Enter a Row and Column : ");
    scanf("%d%d",&r , &col);

    printf("\nEnter a Enlement of First matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter a Enlement of Second matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            scanf("%d",&b[i][j]);
        }
    }  
    
    //Add Matrix
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }  
    
    printf("\n Add Matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }  
}
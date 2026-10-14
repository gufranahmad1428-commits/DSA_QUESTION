#include<stdio.h>
int main(){
    int n, m;
    printf("Enter a number N :");
    scanf("%d",&n);
    printf("Enter a number M :");
    scanf("%d",&m);
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d",arr[i][j]);
        }
        printf("/n");
    }
}